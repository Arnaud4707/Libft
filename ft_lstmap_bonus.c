/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 19:35:55 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/24 20:24:23 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*g;

	if (!f || !del)
		return (0);
	p = NULL;
	while (lst)
	{
		g = ft_lstnew((*f)(lst->content));
		if (!g)
		{
			while (p)
			{
				g = p->next;
				(del)(p->content);
				free(p);
				p = g;
			}
			return (NULL);
		}
		ft_lstadd_back(&p, g);
		lst = lst->next;
	}
	return (p);
}
