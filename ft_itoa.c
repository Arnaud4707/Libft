/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:51:14 by amugisha          #+#    #+#             */
/*   Updated: 2024/11/20 14:50:14 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static	int	ft_len_int(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	if (n == 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static	void	cpy(char **p, int n, int num, int i)
{
	int	j;

	j = 0;
	while (j < (num - 1))
	{
		n = n / 10;
		j++;
	}
	(*p)[i] = (n % 10) + 48 + '\0';
}

static	void	n_negatif(int *n, int *i, int *num, char **p)
{
	*p[*i] = '-';
	*i = *i + 1;
	*n = *n * (-1);
	*num = *num - 1;
}

int	limit(char **p, int n)
{
	int		i;
	int		j;
	char	*c;

	i = 0;
	c = "-2147483648";
	if (n == -2147483648)
	{
		j = 0;
		while (c[j])
		{
			(*p)[j] = c[j];
			j++;
		}
		(*p)[j] = '\0';
		i = 1;
	}
	else if (n == 0)
	{
		(*p)[0] = '0';
		(*p)[1] = '\0';
		i = 1;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i[2];
	int		num;
	char	*p;

	i[0] = 0;
	i[1] = 0;
	num = ft_len_int(n);
	p = malloc((1 + ft_len_int(n)) * sizeof(char));
	if (!p)
		return (p);
	if (n < 0 && n != -2147483648)
		n_negatif(&n, &i[0], &num, &p);
	else if (limit(&p, n) == 1)
		return (p);
	while (i[1] < ft_len_int(n))
	{
		cpy(&p, n, num, i[0]);
		i[0]++;
		i[1]++;
		num--;
	}
	p[i[0]] = '\0';
	return (p);
}

/*int	main(void)
{
	char	*p;

	p = ft_itoa(-2147483648LL);
	printf("%s", p);
	free(p);
	return (0);
}
*/