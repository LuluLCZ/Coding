/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 18:11:51 by llacaze           #+#    #+#             */
/*   Updated: 2017/07/26 18:37:26 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'm')
				ft_putchar(av[1][i + 13]);
			if (av[1][i] > 'm' && av[1][i] <= 'z')
				ft_putchar(av[1][i - 13]);
			if (av[1][i] >= 'A' && av[1][i] <= 'M')
				ft_putchar(av[1][i + 13]);
			if (av[1][i] > 'M' && av[1][i] <= 'Z')
				ft_putchar(av[1][i - 13]);
			i++;
		}
	ft_putchar('\n');
	return (0);
}
