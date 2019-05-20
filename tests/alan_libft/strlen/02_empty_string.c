/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_empty_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 22:25:43 by abarnett          #+#    #+#             */
/*   Updated: 2019/05/19 22:29:26 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <string.h>
#include <stdlib.h>

static int	test_empty(void)
{
	char	*str;

	str = malloc(sizeof(char));
	*str = '\0';
	if (ft_strlen(str) == strlen(str))
		return (1);
	else
		return (0);
}

int			empty_string(void)
{
	if (test_empty())
		return (0);
	else
		return (1);
}
