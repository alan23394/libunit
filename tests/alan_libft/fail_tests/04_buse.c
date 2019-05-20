/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_buse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 18:40:28 by abarnett          #+#    #+#             */
/*   Updated: 2019/05/19 22:36:32 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>

static int	bus_error_function(void)
{
	pid_t	pid;

	pid = getpid();
	kill(pid, 10);
	return (1);
}

int			buse_test(void)
{
	if (bus_error_function())
		return (0);
	else
		return (1);
}
