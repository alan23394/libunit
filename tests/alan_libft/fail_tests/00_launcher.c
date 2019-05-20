/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 18:36:38 by abarnett          #+#    #+#             */
/*   Updated: 2019/05/19 19:27:02 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "fail_tests.h"
#include "ft_put.h"

int		fail_launcher(void)
{
	t_unit_test	*tests;

	tests = init();
	ft_putstr("FAIL TESTS:\n");
	load_test(tests, "-1", &minus_one);
	load_test(tests, "+1", &pos_one);
	load_test(tests, "Seg Fault", &segv_test);
	load_test(tests, "Bus Error", &buse_test);
	return (launch_tests(tests));
}
