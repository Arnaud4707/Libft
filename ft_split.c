/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:46:09 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/24 02:06:44 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

static	int	count_word(char const *c, char set)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (c[i])
	{
		while (c[i] == set && c[i])
			i++;
		if (c[i] != set && c[i])
		{
			while (c[i] != set && c[i])
				i++;
			count++;
		}
	}
	return (count);
}

static	int	count_letter(char const *c, char set, int word)
{
	int	i;
	int	count;
	int	letter;

	i = 0;
	count = 0;
	while (c[i])
	{
		while (c[i] == set && c[i])
			i++;
		if (c[i] != set && c[i])
		{
			letter = 0;
			while (c[i] != set && c[i])
			{
				i++;
				letter++;
			}
			count++;
		}
		if (count == word)
			return (letter);
	}
	return (0);
}

static	void	cpy(char const *c, char set, int id, char **p)
{
	int	i;
	int	letter;
	int	count;

	i = 0;
	count = 0;
	while (c[i])
	{
		while (c[i] == set && c[i])
			i++;
		if (c[i] != set && c[i])
		{
			count++;
			letter = 0;
			while (c[i] != set && c[i])
			{
				if (count == id)
					(*p)[letter] = c[i];
				i++;
				letter++;
			}
			if (count == id)
				(*p)[letter] = '\0';
		}
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**p;

	p = malloc((1 + count_word(s, c)) * sizeof(char *));
	if (!p)
		return (NULL);
	i = 0;
	while (i < count_word(s, c))
	{
		p[i] = malloc((1 + count_letter(s, c, i + 1)) * sizeof(char));
		if (!p[i])
			return (0);
		cpy(s, c, (i + 1), &p[i]);
		i++;
	}
	p[i] = NULL;
	return (p);
}
/*
int	main(void)
{
	char	**c;
	char	g[] = "   f e ff ejf  vfv  ef ef eefefefe  fef   ";
	int	i;
	int	j;

	i = 0;
	printf("%d\n", count_word(g, ' '));
	c = ft_split("   f e ff ejf  vfv  ef ef eefefefe  fef   ", ' ');
	while (c[i])
	{
		printf("%s\n", c[i]);
		free(c[i]);
		i++;
	}
	free(c);
	return (0);
}*/
