/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeatalpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 17:30:56 by llacaze           #+#    #+#             */
/*   Updated: 2017/07/26 17:49:47 by llacaze          ###   ########.fr       */
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
	int		b;

	b = 0;
	i = 0;
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				b = av[1][i];
				while (b >= 65)
				{
					ft_putchar(av[1][i]);
					b--;
				}
			}
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				b = av[1][i];
				while (b >= 97)
				{
					ft_putchar(av[1][i]);
					b--;
				}
			}
			i++;
		}
	}
	return (0);
}
