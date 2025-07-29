/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:53:02 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/17 21:03:59 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	test(unsigned int i, char *c)
{
	if (*c > 64 && *c < 91)
		*c = *c + 32;
	else if (*c > 96 && *c < 123)
		*c = *c - 32;
}

int	main(void)
{
	char	p[] = "abc ABC 123";

	ft_striteri(p, *test);
	printf("%s", p);
	return (0);
}*/
