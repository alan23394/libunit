/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:50:31 by kbelov            #+#    #+#             */
/*   Updated: 2019/12/20 01:19:58 by alan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

struct				s_node
{
	const char		*name;
	int				(*func)(void);
	struct s_node	*next;
};

typedef struct		s_unit_test
{
	struct s_node	*first;
	struct s_node	*last;
}					t_unit_test;

t_unit_test			*init_tests(const char *test_name);
void				*pop_function(t_unit_test *tests);
void				load_test(t_unit_test *tests, const char *name,
						int (*func)(void));
int					launch_tests(t_unit_test *tests);

#endif
