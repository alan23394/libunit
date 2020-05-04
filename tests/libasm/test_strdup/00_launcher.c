/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:24:20 by abarnett          #+#    #+#             */
/*   Updated: 2020/05/03 03:30:11 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "tests.h"

int		test_strdup(void)
{
	t_unit_test	*tests;

	tests = init_tests("TEST_STRDUP");
	load_test(tests, "\"Hello World!\"", &strdup_hello_world);
	load_test(tests, "\"\"", &strdup_empty_string);
	load_test(tests, "Long string (len > 4096)", &strdup_long_string);
	return (launch_tests_debug(tests));
}
