/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:24:20 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/13 21:47:55 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "tests.h"

int		test_strlen(void)
{
	t_unit_test	*tests;

	tests = init_tests("TEST_STRLEN");
	load_test(tests, "'Hello' len = 5", &strlen_hello);
	load_test(tests, "'' len = 0", &strlen_empty_string);
	load_test(tests, "This is a long string with 41 characters!", &strlen_long_string);
	return (launch_tests_debug(tests));
}
