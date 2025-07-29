/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:40:29 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/19 15:28:54 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	verisur(int *n, int fd)
{
	if (*n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (*n);
	}
	if (*n < 0)
	{
		write(fd, "-", 1);
		*n = *n * (-1);
		return (*n);
	}
	return (0);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	int		digit;
	int		temp;
	char	c;

	if (verisur(&n, fd) == -2147483648)
		return ;
	temp = n;
	digit = len(n);
	if (n == 0)
		write(fd, "0", 1);
	while (digit > 0)
	{
		i = 1;
		while (i < digit)
		{
			temp = temp / 10;
			i++;
		}
		c = (temp % 10) + 48;
		write(fd, &c, 1);
		temp = n;
		digit--;
	}
}
