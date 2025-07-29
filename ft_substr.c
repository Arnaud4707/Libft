/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:00:49 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/20 14:17:17 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static unsigned int	slen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;

	if (!s)
		return (0);
	if (start >= slen(s))
		len = 0;
	else if (len > slen(s + start))
		len = slen(s + start);
	i = 0;
	p = malloc((len + 1) * sizeof(char));
	if (!p)
		return (0);
	while (i < len && s[i + start])
	{
		p[i] = s[i + start];
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*
int	main(void)
{
	char	c[] = "0123456789";
	char	*p;

	p = ft_substr(c, 9, 10);
	printf("%s", p);
	free(p);
	return (0);
}*/
