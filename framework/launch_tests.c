/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:47:53 by abarnett          #+#    #+#             */
/*   Updated: 2019/05/18 19:04:30 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "ft_mem.h"
#include "ft_printf.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void	launch_function(int (*func)(void))
{
	pid_t	new_pid;
	int		*status;

	status = 0;
	new_pid = fork();
	if (new_pid == 0)
	{
		exit(func());
	}
	else
	{
		wait(status);
		ft_printf("[ %d ]\n", WEXITSTATUS(status));
	}
}

int		launch_tests(t_unit_test *tests)
{
	int		(*function)(void);

	if (!tests)
		return (0);
	while (tests->first)
	{
		ft_printf("  > %s : ", tests->first->name);
		function = pop_function(tests);
		launch_function(function);
	}

	ft_memdel((void **)&tests);
	return (0);
}
