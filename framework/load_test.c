/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 09:23:07 by exam              #+#    #+#             */
/*   Updated: 2019/05/18 17:48:02 by abarnett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "ft_mem.h"

struct s_node	*init_node(const char *name, int (*func)(void))
{
	struct s_node	*new_node;

	new_node = (struct s_node *)ft_memalloc(sizeof(struct s_node));
	new_node->name = name;
	new_node->func = func;
	new_node->next = 0;
	return (new_node);
}

t_unit_test		*init(void)
{
	t_unit_test	*new_tests;

	new_tests = (t_unit_test *)ft_memalloc(sizeof(t_unit_test));
	new_tests->first = 0;
	new_tests->last = 0;
	return (new_tests);
}

void			load_test(t_unit_test *tests, const char *name,
					int (*func)(void))
{
	struct s_node	*new_node;

	if (!tests)
		return ;
	new_node = init_node(name, func);
	if (!tests->first)
	{
		tests->first = new_node;
		tests->last = new_node;
	}
	else
	{
		tests->last->next = new_node;
		tests->last = tests->last->next;
	}
}

/*
int				is_empty(t_unit_test *tests)
{
	if (!tests || !tests->first)
		return (1);
	return (0);
}
*/

/*
void			*dequeue(t_unit_test *tests)
{
	void	*retptr;
	void	*rmptr;

	if (is_empty(tests))
		return (0);
	if (tests->first == tests->last)
	{
		tests->last = 0;
	}
	retptr = tests->first->content;
	rmptr = tests->first;
	tests->first = tests->first->next;
	free(rmptr);
	return (retptr);
}
*/
