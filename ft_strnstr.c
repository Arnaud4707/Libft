/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:59:25 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/19 23:53:14 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

static size_t	slen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	llen;

	i = 0;
	if (slen(little) == 0)
		return ((char *) big);
	llen = slen(little);
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] && big[i + j] == little[j] && i + j < len)
			j++;
		if (j == llen)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*src = "abcdef";

	printf("%s\n%s", strstr(src, "abcdefghijklmnop"),
       	ft_strnstr(src, "abcdefghijklmnop", slen(src)));
	return (0);
}*/
