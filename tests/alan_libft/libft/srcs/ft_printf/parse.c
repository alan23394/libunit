/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 21:38:40 by abarnett          #+#    #+#             */
/*   Updated: 2019/03/20 15:42:53 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_format.h"
#include "ft_string.h"
#include "ft_utils.h"
#include <stdarg.h>

/*
** This function (commented out) will print the parameters that were used to
** call ft_printf. It should be used any time after the format struct is filled
** (i.e. in a specific flag module, or in dispatch). I'm commenting it out
** because 1) it isn't needed in the final version and 2) it's 28 lines and
** doesn't pass norm.
**
** void				print_params(t_format fmt_struct)
** {
** 	char	*convs;
** 	char	*flags;
** 	int		i;
**
** 	convs = CONVS;
** 	flags = "#0-+ ";
** 	i = 0;
** 	ft_putchar('%');
** 	if (fmt_struct.flags)
** 	{
** 		while (i < 5)
** 		{
** 			if ((1 << i) & fmt_struct.flags)
** 				ft_putchar(flags[i]);
** 			++i;
** 		}
** 	}
** 	if (fmt_struct.width)
** 		ft_putnbr(fmt_struct.width);
** 	if (fmt_struct.precision != -1)
** 	{
** 		ft_putchar('.');
** 		ft_putnbr(fmt_struct.precision);
** 	}
** 	if (fmt_struct.length)
** 		ft_putchar(fmt_struct.length);
** 	ft_putchar(*(convs + fmt_struct.conv));
** 	ft_putstr(":	");
** }
*/

/*
**	This function sets the conversion character from the format string in the
**	format struct if it's valid, and if it's not, it sets it to 0.
**	The conversion character is used as the index to the flags jump table.
**	If you would like to add a new function with a new character,
**		add your function to the srcs/ft_printf/flags directory,
**			add a prototype to the ft_printf_flags header file too,
**		add the character to the end of CONVS (in ft_printf_format.h),
**		add your function name and character to the jump table in make_list.c.
*/

void	get_conversion(const char **format, t_format *fmt_struct)
{
	const char	*flags;
	char		*index;

	flags = CONVS;
	if (**format && (index = ft_strchr(flags, **format)))
	{
		(*format)++;
		fmt_struct->conv = *index;
	}
	else
	{
		fmt_struct->conv = 0;
	}
}

/*
**	This function grabs the length of the conversion, if present, and stores it
**	in the fmt_struct, while also moving the format string to the next spot.
**
**	If the length "hh" or "ll" is used, it is replaced with "H" or "L".
*/

void	get_length(const char **format, t_format *fmt_struct)
{
	const char	*flags;
	const char	*index;

	flags = "hHlLjz";
	if (**format && (index = ft_strchr(flags, **format)))
	{
		if (**format == 'h' && *(*format + 1) == 'h')
		{
			fmt_struct->length = 'H';
			++(*format);
		}
		else if (**format == 'l' && *(*format + 1) == 'l')
		{
			fmt_struct->length = 'L';
			++(*format);
		}
		else
			fmt_struct->length = *index;
		++(*format);
	}
}

/*
**	This function uses atoi to grab the number for width and precision.
**	It checks if there is a star for both, and gets the number from the valist
**	if there is a star in either place.
**	it is important that we don't move the format string by the length of the
**	number for precision, because a '.' that isn't followed by a number has a
**	precision of 0, and the numlen of 0 is 1, so it would move it unnecessarily.
**	instead we increase it while the character is a digit. this also prevents
**	negative numbers from getting through (by not moving past the minus sign,
**	even though atoi will do that anyway) in addition to the if statement below
**	that checks if atoi was able to pull one.
*/

void	get_width_precis(const char **format, t_format *fmt_struct,
			va_list valist)
{
	if (**format)
	{
		if (**format == '*' && ++(*format))
			fmt_struct->width = va_arg(valist, int);
		else if (ft_isdigit(**format))
		{
			fmt_struct->width = ft_atoi(*(char **)format);
			while (*format && ft_isdigit(**format))
				++(*format);
		}
	}
	if (**format && **format == '.')
	{
		++(*format);
		if (**format == '*' && ++(*format))
			fmt_struct->precision = va_arg(valist, int);
		else if (ft_isdigit(**format))
		{
			fmt_struct->precision = ft_atoi(*(char **)format);
			while (*format && ft_isdigit(**format))
				++(*format);
			if (fmt_struct->precision < 0)
				fmt_struct->precision = 0;
		}
	}
}

/*
**	The position of the characters in the flags string represent
**	the index of their bit in the ret variable.
**	To add new flags,
**		add the flag character to the end of the flags string
**			(make sure the type of ret is big enough to hold that many bits)
**			(add a macro for easier usage if you want)
**		flags will be dealt with in modules for each conversion
**	The third to last line disables the 0 flag if the - flag is also present.
**	The second to last line disables the ' ' flag if the + flag is also present.
*/

void	get_flags(const char **format, t_format *fmt_struct)
{
	const char		*flags;
	const char		*cur;
	unsigned char	ret;

	flags = "#0-+ ";
	ret = 0;
	while (**format && (cur = ft_strchr(flags, **format)))
	{
		ret = ret | (1 << (cur - flags));
		++(*format);
	}
	ret = ((ret & (ZERO | MINUS)) == (ZERO | MINUS) ? (ret ^ ZERO) : ret);
	ret = ((ret & (SPACE | PLUS)) == (SPACE | PLUS) ? (ret ^ SPACE) : ret);
	fmt_struct->flags = ret;
}
