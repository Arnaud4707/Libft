/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:48:32 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/18 14:26:44 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

static size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] && (i < size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	if (ft_strlen(src) > (size - 1))
		return (ft_strlen(src));
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	e[20] = "1234567";
	char	g[20] = "1234567";
	char	f[] = "abcdefghijklmnopqrstuv";

	printf("%s\n%zu", g, ft_strlcpy(g, f, 0));
	return (0);
}*/
