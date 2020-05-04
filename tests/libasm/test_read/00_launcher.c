/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:24:20 by abarnett          #+#    #+#             */
/*   Updated: 2020/05/04 05:38:00 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "tests.h"

int		test_read(void)
{
	t_unit_test	*tests;

	tests = init_tests("TEST_READ");
	load_test(tests, "Enter 4 characters", &read_five_chars);
	load_test(tests, "Enter 9 characters", &read_ten_chars);
	load_test(tests, "0 character read", &read_zero_chars);
	load_test(tests, "Enter 'Hello'", &read_test_string);
	load_test(tests, "Bad file descriptor", &read_bad_fd);
	return (launch_tests(tests));
}
