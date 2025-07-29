/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:53:32 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/18 23:38:29 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *dest, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *) dest)[i] == (unsigned char ) c)
			return ((char *)(dest + i));
		i++;
	}
	return (NULL);
}
/*
int     main(void)
{
	char    c[] = "bcdefg";
	
	printf("%s\n%s", (unsigned char *) memchr(c, 'e', 6),
       	(unsigned char *) ft_memchr(c, 'e', 6));
	return (0);
}*/
