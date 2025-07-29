/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:48:32 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/18 17:28:04 by amugisha         ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	j;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	j = 0;
	if (size > 0)
	{
		while (src[j] && (lendst + j < size - 1))
		{
			dst[j + lendst] = src[j];
			j++;
		}
		dst[j + lendst] = '\0';
	}
	if (size <= lendst)
		return (lensrc + size);
	return (lendst + lensrc);
}
/*
int	main(void)
{
	char dest[30]; memset(dest, 'r', 14);
	char *src = "lorem ipsum dolor sit amet";
	char	g[20] = "0123456789";
	char	f[] = "abcdefghijklm123456";

	printf("%s\n%zu", dest, ft_strlcat(dest, src, 15));
	return (0);
}*/
