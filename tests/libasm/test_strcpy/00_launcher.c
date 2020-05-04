/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:24:20 by abarnett          #+#    #+#             */
/*   Updated: 2020/05/02 13:34:08 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "tests.h"

int		test_strcpy(void)
{
	t_unit_test	*tests;

	tests = init_tests("TEST_STRCPY");
	load_test(tests, "Copy \"Hello World!\"", &strcpy_hello_world);
	load_test(tests, "Copy in a null string", &strcpy_null_string);
	load_test(tests, "Copy from a null pointer", &strcpy_null_ptr_src);
	load_test(tests, "Copy to a null pointer", &strcpy_null_ptr_dst);
	return (launch_tests(tests));
}
