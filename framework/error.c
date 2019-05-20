/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 23:04:54 by abarnett          #+#    #+#             */
/*   Updated: 2019/05/19 23:05:03 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_error(const char *func, const char *error)
{
	ft_printfd(2, "libunit: %s: %s\n", func, error);
	return (1);
}
