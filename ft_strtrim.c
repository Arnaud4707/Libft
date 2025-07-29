/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:36:18 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/24 22:07:18 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	len(const char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

static int	begin(const char *s1, const char *s2)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	while (s1[i])
	{
		j = 0;
		check = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				check = 1;
			j++;
		}
		if (!check)
			break ;
		i++;
	}
	return (i);
}

static int	end(const char *s1, const char *s2, int size)
{
	int	i;
	int	j;
	int	check;

	i = size - 1;
	while (s1[i])
	{
		j = 0;
		check = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				check = 1;
			j++;
		}
		if (!check)
			break ;
		i--;
	}
	return (i);
}

static char	*cpy(const char *s1, int head, int foot)
{
	int		i;
	char	*p;

	i = 0;
	p = malloc((foot - head + 2) * sizeof(char));
	if (!p)
		return (0);
	while (head <= foot)
	{
		p[i] = s1[head];
		i++;
		head++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		head;
	int		foot;
	int		i;

	head = begin(s1, set);
	foot = end(s1, set, len(s1));
	i = 0;
	if (!s1[0] || foot < head)
	{
		p = malloc(sizeof(char) * 1);
		if (!p)
			return (NULL);
		p[0] = '\0';
	}
	else
		p = cpy(s1, head, foot);
	if (!p)
		return (0);
	return (p);
}
/*
int	main(void)
{
	printf("%s\n", ft_strtrim("bonbon @$#", "# $@"));
	return (0);
}*/
