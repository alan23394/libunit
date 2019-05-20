/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:24:20 by abarnett          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/05/18 18:27:01 by kbelov           ###   ########.fr       */
=======
/*   Updated: 2019/05/18 18:27:36 by abarnett         ###   ########.fr       */
>>>>>>> bba6c58970d767cc59267de04ff53ac090368da3
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "atoi_tests.h"
#include "ft_put.h"

int		atoi_launcher(void)
{
	t_unit_test	*tests;

	tests = init();
	ft_putstr("ATOI:\n");
	load_test(tests, "Int Min", &int_min);
	load_test(tests, "Int Overflow", &int_overflow);
	return (launch_tests(tests));
}
