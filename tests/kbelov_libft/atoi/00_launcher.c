/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 17:51:23 by kbelov            #+#    #+#             */
/*   Updated: 2019/05/19 18:34:34 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "atoi_tests.h"
#include "libft.h"

int		atoi_launcher(void)
{
	t_unit_test	*tests;

	tests = init();
	ft_putstr("ATOI:\n");
	load_test(tests, "int_min", &int_min);
	load_test(tests, "int_negative_one", &int_negative_one);
	load_test(tests, "int_zero", &int_zero);
	load_test(tests, "int_positive_one", &int_positive_one);
	load_test(tests, "int_max", &int_max);
	load_test(tests, "less_then_int", &less_then_int);
	load_test(tests, "more_then_int", &more_then_int);
	load_test(tests, "int_empty_string", &int_empty_string);
	load_test(tests, "int_space", &int_space);
	load_test(tests, "int_space_after_neg", &int_space_after_neg);
	load_test(tests, "int_double_neg", &int_double_neg);
	load_test(tests, "int_double_pos", &int_double_pos);
	load_test(tests, "int_single_pos", &int_single_pos);
	load_test(tests, "int_space_neg", &int_space_neg);
	load_test(tests, "int_space_pos", &int_space_pos);
	load_test(tests, "int_space_after", &int_space_after);
	load_test(tests, "two_ints", &two_ints);
	load_test(tests, "no_ints", &no_ints);
	load_test(tests, "no_ints_minus", &no_ints_minus);
	load_test(tests, "no_ints_plus", &no_ints_plus);
	load_test(tests, "space_only", &space_only);
	return (launch_tests(tests));
}
