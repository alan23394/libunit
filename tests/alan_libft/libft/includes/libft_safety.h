/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_safety.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alan <alanbarnett328@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 12:02:20 by alan              #+#    #+#             */
/*   Updated: 2019/05/19 22:39:05 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** A macro for enabling/disabling safety in some functions. A list of supported
** functions is as follows:
**
** ft_strlen
** 	removes segfault on passed null string, returns 0 instead
*/

#ifndef LIBFT_SAFETY_H
# define LIBFT_SAFETY_H

# define LIBFT_SAFE

#endif
