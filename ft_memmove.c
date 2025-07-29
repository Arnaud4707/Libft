/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:18:37 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/18 13:36:47 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			((unsigned char *) dest)[n] = ((unsigned char *) src)[n];
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	c[] = "aabbcc";
	char	h[] = "aabbcc";

	printf("befor: %s\n", c);
	memmove(c + 2, c, 4);
	printf("after: %s\n", c);
	printf("\nbefor: %s\n", h);
	ft_memmove(h + 2, h, 4);
	printf("\nafter ft: %s\n", h);
	return (0);
}*/
