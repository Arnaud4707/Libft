/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 20:32:19 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/23 22:25:35 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <string.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*p;
	t_list	*g;
	t_list	*t;

	p = ft_lstnew("CouCou");
	g = ft_lstnew(" tout le monde");
	ft_lstadd_front(&p, g);
	while (p)
	{
		t = p->next;
		printf("%s", (char *) p->content);
		free(p);
		p = t;
	}
	return (0);
}*/
