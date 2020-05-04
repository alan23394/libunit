/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:24:20 by abarnett          #+#    #+#             */
/*   Updated: 2020/05/04 05:38:07 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "tests.h"

int		test_write(void)
{
	t_unit_test	*tests;

	tests = init_tests("TEST_WRITE");
	load_test(tests, "'stdout!', 7 chars", &write_full_string);
	load_test(tests, "'stdout!', 4 chars", &write_truncated_string);
	load_test(tests, "'stdout!', 0 chars", &write_zero_chars);
	load_test(tests, "'stdout!', 10 chars", &write_extra_chars);
	load_test(tests, "Bad file descriptor", &write_bad_fd);
	return (launch_tests_debug(tests));
}
