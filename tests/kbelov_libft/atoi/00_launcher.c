/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 17:51:23 by kbelov            #+#    #+#             */
/*   Updated: 2019/05/18 17:55:51 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "atoi_tests.h"
#include "ft_put.h"

int		atoi_launcher(void)
{
	t_unit_test	*testlist;

	testlist = 0;
	ft_putstr("ATOI:\n");
	load_test(&testlist, "Int Min", &int_min);
	return (launch_tests(&testlist));
}
