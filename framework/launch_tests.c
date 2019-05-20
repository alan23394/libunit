/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:47:53 by abarnett          #+#    #+#             */
/*   Updated: 2019/05/19 23:36:59 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "colors.h"
#include "error.h"
#include "ft_mem.h"
#include "ft_printf.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int		handle_signal(int signal)
{
	if (signal == 10)
		ft_printf("[%sBUSE%s]\n", COLOR_BUSE, COLOR_NORM);
	else if (signal == 11)
		ft_printf("[%sSEGV%s]\n", COLOR_SEGV, COLOR_NORM);
	else
		ft_printf("[%sUNK%s]\n", COLOR_UNK, COLOR_NORM);
	return (0);
}

int		handle_status(int status)
{
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
		{
			ft_printf("[%sOK%s]\n", COLOR_OK, COLOR_NORM);
			return (1);
		}
		else
		{
			ft_printf("[%sKO%s]\n", COLOR_KO, COLOR_NORM);
			return (0);
		}
	}
	else if (WIFSIGNALED(status))
	{
		return (handle_signal(WTERMSIG(status)));
	}
	else
	{
		ft_printf("[%sUNK%s]\n", COLOR_UNK, COLOR_NORM);
		return (0);
	}
}

int		launch_function(int (*func)(void))
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
		status = handle_status(status);
		return (status);
	}
	return (0);
}

int		launch_tests(t_unit_test *tests)
{
	int		(*function)(void);
	int		total;
	int		passes;

	total = 0;
	passes = 0;
	if (!tests)
		return (0);
	while (tests->first)
	{
		ft_printf("  > %s : ", tests->first->name);
		function = pop_function(tests);
		passes += launch_function(function);
		++total;
	}
	ft_memdel((void **)&tests);
	ft_printf(" %d/%d tests passed\n\n", passes, total);
	if (total != passes)
		return (-1);
	else
		return (0);
}
