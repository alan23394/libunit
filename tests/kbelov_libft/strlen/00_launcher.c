/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 17:51:23 by kbelov            #+#    #+#             */
/*   Updated: 2019/05/19 23:01:26 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "strlen_tests.h"
#include "libft.h"

int		strlen_launcher(void)
{
	t_unit_test	*tests;

	tests = init();
	ft_putstr("STRLEN:\n");
	load_test(tests, "basic_test", &basic_test);
	load_test(tests, "empty_string", &empty_string);
	load_test(tests, "one_char", &one_char);
	load_test(tests, "one_space", &one_space);
	load_test(tests, "max_int", &max_int);
	return (launch_tests(tests));
}
