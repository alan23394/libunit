/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:24:20 by abarnett          #+#    #+#             */
/*   Updated: 2020/05/02 17:04:44 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "tests.h"

int		test_strcmp(void)
{
	t_unit_test	*tests;

	tests = init_tests("TEST_STRCMP");
	load_test(tests, "Two \"Hello World!\"s", &strcmp_hello_world);
	load_test(tests, "\"Hell\" - \"Hello!\"", &strcmp_trimmed_s1);
	load_test(tests, "\"Hello World!\" - \"Hello \"", &strcmp_trimmed_s2);
	load_test(tests, "\"Mello World!\' - \"Hello World!\"", &strcmp_changed_character_s1);
	load_test(tests, "\"Hello!\" - \"Hella!\"", &strcmp_changed_character_s2);
	load_test(tests, "\"\' - \"Hello World!\"", &strcmp_null_s1);
	load_test(tests, "\"Hello World!\' - \"\"", &strcmp_null_s2);
	load_test(tests, "null pointer - \"Hello World!\"", &strcmp_null_ptr_s1);
	load_test(tests, "\"Hello World!\" - null pointer", &strcmp_null_ptr_s2);
	load_test(tests, "Two \"\"s (empty strings)", &strcmp_null_strings);
	return (launch_tests(tests));
}
