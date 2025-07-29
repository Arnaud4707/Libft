/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:49:23 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/23 20:55:52 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*p;

	p = malloc(sizeof(t_list));
	if (!p)
		return (p);
	p->content = content;
	p->next = NULL;
	return (p);
}
/*
int	main(void)
{
	t_list	*p;

	p = ft_lstnew("CouCou");
	printf("%s", ((char *)p->content));
	free(p);
	return (0);
}*/
