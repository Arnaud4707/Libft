/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:48:16 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/12 19:13:44 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *) s)[i] = c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char	g[] = "abcdef";
	char	f[] = "abcdef";

	memset(g, 4);
	ft_memset(f, '@', 4);
	printf("%s \n%s", g, f);
	return (0);
}*/
