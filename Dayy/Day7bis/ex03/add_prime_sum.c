/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsayah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 18:47:23 by nsayah            #+#    #+#             */
/*   Updated: 2017/03/17 18:55:20 by nsayah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		atoi(char *str)
{
	int		res;
	int		i;

	res = 0;
	i = 0;
	if (str[0] == '+')
		i = 1;
	while (str[i])
		res = res * 10 + str[i++] - '0';
	return (res);
}

void	putnbr(int nb)
{
	if (nb >= 10)
	{
		putnbr(nb / 10);
		putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		is_prime(int nb)
{
	int		i;

	i = 3;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int		main(int ac, char **av)
{
	int		sum;
	int		i;
	int		nb;

	sum = 0;
	i = 0;
	if (ac != 2 || av[1][0] == '-')
	{
		putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	nb = atoi(av[1]);
	while (i <= nb)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	putnbr(sum);
	ft_putchar('\n');
	return (0);
}
