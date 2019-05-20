/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:24:20 by abarnett          #+#    #+#             */
/*   Updated: 2019/05/19 22:16:59 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "atoi_tests.h"
#include "ft_put.h"

int		atoi_launcher(void)
{
	t_unit_test	*tests;

	tests = init();
	ft_putstr("ATOI:\n");
	load_test(tests, "Int Min", &int_min);
	load_test(tests, "Int Overflow", &int_overflow);
	load_test(tests, "Positive Num", &positive);
	load_test(tests, "Negative Num", &negative);
	return (launch_tests(tests));
}
