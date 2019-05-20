/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_max_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:30:08 by kbelov            #+#    #+#             */
/*   Updated: 2019/05/19 23:34:15 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	test_max_int(void)
{
	char 	test[2147483647];
	int		i;

	test[2147483646] = '\0';
	i = 0;
	while (test[i] != '\0')
	{
		test[i] = 'a';
		++i;
	}
	if (ft_strlen(test) == strlen(test))
		return (1);
	else
		return (0);
}

int			max_int(void)
{
	if (test_max_int())
		return (0);
	else
		return (-1);
}
