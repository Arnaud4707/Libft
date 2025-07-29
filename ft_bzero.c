/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:48:16 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/12 19:03:38 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *) s)[i] = 0;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char	g[] = "abcdef";
	char	f[] = "abcdef";
	int	i;

	bzero(g, 4);
	ft_bzero(f, 4);
	i = 0;
	while (i < 6)
	{
		printf("%c \n%c", g[i], f[i]);
		i++;
	}
	return (0);
}*/
