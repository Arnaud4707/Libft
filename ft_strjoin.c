/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 00:06:38 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/15 17:00:09 by amugisha         ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	p = malloc((len(s1) + len(s2) + 1) * sizeof(char));
	if (!p)
		return (p);
	while (i < len(s1))
	{
		p[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len(s2))
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = '\0';
	return (p);
}
/*
int	main(void)
{
	char	*c;

	c = ft_strjoin("Bonjours", " tout le mond.");
	printf("%s", c);
	free(c);
	return (0);
}*/
