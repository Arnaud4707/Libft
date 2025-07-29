/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:59:25 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/18 23:50:27 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

static int	len(const char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = len(s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*src = "bonjour a tous";

	printf("%s\n%s", strrchr(src, '\0'), ft_strrchr(src, '\0'));
	return (0);
}*/
