/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 22:18:14 by abarnett          #+#    #+#             */
/*   Updated: 2019/05/19 22:28:16 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "strlen_tests.h"
#include "ft_put.h"

int		strlen_launcher(void)
{
	t_unit_test *tests;

	tests = init();
	ft_putstr("STRLEN:\n");
	load_test(tests, "Normal string", &normal_string);
	load_test(tests, "Empty string", &empty_string);
	load_test(tests, "Null string", &null_string);
	return (launch_tests(tests));
}
