/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:53:02 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/19 16:33:08 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static	int	len(char const *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	size_t	i;

	p = malloc((1 + len(s)) * sizeof(char));
	if (!p)
		return (p);
	i = 0;
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*
char	test(unsigned int i, char c)
{
	if (c > 64 && c < 91)
		c = c + 32;
	else if (c > 96 && c < 123)
		c = c - 32;
	return (c);
}

int	main(void)
{
	char	*p;

	p = ft_strmapi("abc ABC 123", *test);
	printf("%s", p);
	free(p);
	return (0);
}*/
