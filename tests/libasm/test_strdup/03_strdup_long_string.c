/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strdup_long_string.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2020/05/03 12:49:34 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int	test_strdup_long_string(void)
{
	char	*str1;
	char	*str2;
	int		ret;
	int		fd;

	str1 = (char *)malloc(8193);
	str1[8192] = 0;
	fd = open("long_string_file", O_RDONLY);
	read(fd, str1, 8192);

	str2 = ftasm_strdup(str1);
	printf("len1: %d, len2: %d ", ftasm_strlen(str1), ftasm_strlen(str2));
	printf("len1: %d, len2: %d ", strlen(str1), strlen(str2));
	fflush(0);
	ret = strcmp(str1, str2);
	free(str1);
	free(str2);
	return (ret);
}

int	strdup_long_string(void)
{
	if (test_strdup_long_string() == 0)
		return (0);
	else
		return (1);
}
