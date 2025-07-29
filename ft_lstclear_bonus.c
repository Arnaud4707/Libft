/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:47:33 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/24 17:18:51 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	if (!del || !lst || !*lst)
		return ;
	while (*lst && lst)
	{
		p = (*lst)->next;
		(del)((*lst)->content);
		free(*lst);
		*lst = p;
	}
}
