/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 20:29:38 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/18 15:05:04 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	rest;
	int	signe;

	i = 0;
	signe = 1;
	rest = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		i++;
		signe = -1;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] > 47 && nptr[i] < 58)
	{
		rest = rest * 10 + (nptr[i] - 48);
		i++;
	}
	return (rest * signe);
}
/*
int	main(void)
{
	printf("%d\n%d", atoi("-u12i3"), ft_atoi("-o12i3"));
	return (0);
}*/
