/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 14:50:31 by kbelov            #+#    #+#             */
/*   Updated: 2019/05/18 15:37:48 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

typedef struct			s_unit_test
{
	void				*name;
	int					(*f)(void);
	struct s_unit_test	*next;
}						t_unit_test

void					load_test(t_unit_test **testlist, const char *name,
		int (*f)(void));
int						launch_tests(t_unit_test **testlist);

#endif
