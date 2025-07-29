/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:53:32 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/17 16:11:39 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *) s1)[i] != ((unsigned char *) s2)[i])
			return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
		i++;
	}
	return (0);
}
/*
int     main(void)
{
	char    c[] = "bcdefg";
	char	d[] = "bczefg";
	printf("%d\n%d", memcmp(c, d, 3), ft_memcmp(c, d, 3));
	return (0);
}*/
