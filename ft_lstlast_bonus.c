/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 23:46:17 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/24 00:31:39 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;

	p = lst;
	while (p)
	{
		if (!p->next)
			return (p);
		p = p->next;
	}
	return (p);
}
/*
int	main(void)
{
	t_list	*p;
	t_list	*g;
	t_list	*l;
	t_list	*test;

	p = ft_lstnew("1");
	g = ft_lstnew("2");
	l = ft_lstnew("3");
	ft_lstadd_front(&p, g);
	ft_lstadd_front(&p, l);
	test = ft_lstlast(p);
	printf("%s\n", (char *)l->content);
	return (0);
}*/
