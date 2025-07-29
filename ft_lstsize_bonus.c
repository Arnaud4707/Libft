/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:28:10 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/23 22:44:56 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*p;
	int		i;

	i = 0;
	p = lst;
	while (p)
	{
		i++;
		p = p->next;
	}
	return (i);
}
/*
int	main(void)
{
	t_list *l;
	int actual;
	int expected;

	l = ft_lstnew(ft_strdup("1"));
	l->next = ft_lstnew(ft_strdup("2"));
	l->next->next = ft_lstnew(ft_strdup("3"));
	expected = 3;
	actual = ft_lstsize(l);
	if (actual == expected)
		printf("TEST_SUCCESS %d\n", actual);
	else
		printf("TEST_FAILED %d\n", actual);
	return (0);
}*/
