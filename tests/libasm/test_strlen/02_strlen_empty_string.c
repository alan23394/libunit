/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strlen_empty_string.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/04/13 21:45:07 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <stdio.h>

int	test_strlen_empty_string(void)
{
	int	len;

	len = ftasm_strlen("");
	printf("got: %d ", len);
	fflush(0);
	return (len);
}

int	strlen_empty_string(void)
{
	if (test_strlen_empty_string() == 0)
		return (0);
	else
		return (1);
}
