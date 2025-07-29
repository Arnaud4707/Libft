/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:21:02 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/19 16:55:23 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static	int	len(const char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*p;
	int		i;

	p = malloc((len(s) + 1) * sizeof(char));
	if (!p)
		return (p);
	i = 0;
	while (s[i])
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*
int	main(void)
{
	char	c[] = "lorem ipsum dolor sit amet";
	char	*cp;
	char	*dp;

	cp = strdup(c);
	dp = ft_strdup(c);
	printf("%s\n%s", cp, dp);
	free(cp);
	free(dp);
	return (0);
}*/
