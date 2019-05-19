/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:47:53 by abarnett          #+#    #+#             */
/*   Updated: 2019/05/18 17:47:43 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "ft_printf.h"

int		launch_tests(t_unit_test *tests)
{
	ft_printf("launch: %s\n", tests->first->name);
	return (0);
}
