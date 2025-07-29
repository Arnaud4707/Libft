/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:41:12 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/19 22:31:56 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123)
		|| (c > 47 && c < 58))
		return (8);
	return (0);
}
/*
int	main(void)
{
	printf("%i \n", ft_isalnum('5'));
	printf("%i \n", isalnum('2'));
	return (0);
}*/
