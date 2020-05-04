/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:24:20 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/12 17:11:41 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "tests.h"

int		test_sub(void)
{
	t_unit_test	*tests;

	tests = init_tests("TEST_SUB");
	load_test(tests, "5 - 10", &sub_5_10);
	load_test(tests, "10 - 10", &sub_10_10);
	load_test(tests, "5 - -5", &sub_5_negative5);
	load_test(tests, "5 - -10", &sub_5_negative10);
	load_test(tests, "-4 - -8", &sub_negative4_negative8);
	load_test(tests, "-4 - 8", &sub_negative4_8);
	load_test(tests, "0 - 10", &sub_0_10);
	load_test(tests, "5 - 0", &sub_5_0);
	load_test(tests, "0 - -4", &sub_0_negative4);
	load_test(tests, "-20 - 0", &sub_negative_20_0);
	return (launch_tests(tests));
}
