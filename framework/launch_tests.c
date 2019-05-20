/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:47:53 by abarnett          #+#    #+#             */
/*   Updated: 2019/05/19 18:02:21 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "colors.h"
#include "ft_mem.h"
#include "ft_printf.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int		print_error(const char *func, const char *error)
{
	ft_printfd(2, "libunit: %s: %s\n", func, error);
	return (1);
}

void	print_status(int status)
{
	int	exit_status;
	int	signal;

	exit_status = 0;
	signal = 0;
	if (WIFEXITED(status))
	{
		exit_status = WEXITSTATUS(status);
		if (exit_status == 0)
			ft_printf("[%sOK%s]\n", COLOR_OK, COLOR_NORM);
		else
			ft_printf("[%sKO%s]\n", COLOR_KO, COLOR_NORM);
	}
	else if (WIFSIGNALED(status))
	{
		signal = WTERMSIG(status);
		if (signal == 10)
			ft_printf("[%sBUSE%s]\n", COLOR_BUSE, COLOR_NORM);
		else if (signal == 11)
			ft_printf("[%sSEGV%s]\n", COLOR_SEGV, COLOR_NORM);
		else
			ft_printf("[%sUNK%s]\n", COLOR_UNK, COLOR_NORM);
	}
	else
	{
		ft_printf("[%sUNK%s]\n", COLOR_UNK, COLOR_NORM);
	}
}

void	launch_function(int (*func)(void))
{
	pid_t	new_pid;
	int		status;

	status = 0;
	new_pid = fork();
	if (new_pid < 0)
	{
		print_error("launch_function", "fork failed");
	}
	else if (new_pid == 0)
	{
		status = func();
		exit(status);
	}
	else
	{
		wait(&status);
		print_status(status);
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
