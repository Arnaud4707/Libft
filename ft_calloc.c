/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:54:10 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/20 15:02:21 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	i;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	p = malloc(nmemb * size);
	if (!p)
		return (0);
	i = 0;
	while (i < (size * nmemb))
	{
		*(unsigned char *)(p + i) = 0;
		i++;
	}
	return (p);
}

/*int	main(void)
{
	char	*c;
	char	*d;
	int	i;

	c = calloc(10, 8);
	d = ft_calloc(10, 8);
	i = 0;
	while (i < 0)
	{
		printf("%d", c[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 0)
	{
		printf("%d", d[i]);
		i++;
	}
	free(c);
	free(d);
	return (0);
}*/