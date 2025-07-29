/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:59:25 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/20 00:17:17 by amugisha         ###   ########.fr       */
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

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!c)
		return ((char *)(s + len(s)));
	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			break ;
		i++;
	}
	if (s[i] == (char) c)
		return ((char *)(s + i));
	return (0);
}
/*
int	main(void)
{
	char	*src = "bonjour";

	printf("%s\n", ft_strchr(src, 'b'));
	return (0);
}*/
