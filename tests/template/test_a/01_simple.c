/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_simple.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarnett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:32:14 by abarnett          #+#    #+#             */
/*   Updated: 2019/12/20 01:21:31 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	test_func_simple(void)
{
	return (1);
}

int	simple(void)
{
	if (test_func_simple() == 1)
		return (0);
	else
		return (1);
}
