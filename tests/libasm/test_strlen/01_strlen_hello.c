/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strlen_hello.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/13 07:41:33 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <stdio.h>

int	test_strlen_hello(void)
{
	int	len;

	len = ftasm_strlen("Hello");
	printf("got: %d ", len);
	fflush(0);
	return (len);
}

int	strlen_hello(void)
{
	if (test_strlen_hello() == 5)
		return (0);
	else
		return (1);
}
