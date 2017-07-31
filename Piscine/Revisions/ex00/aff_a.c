/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 17:08:31 by llacaze           #+#    #+#             */
/*   Updated: 2017/07/26 17:25:45 by llacaze          ###   ########.fr       */
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
		ft_putchar('a');
		ft_putchar('\n');
		return (0);
	}
	else
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] == 'a')
			{
				ft_putchar('a');
				ft_putchar('\n');
				return (0);
			}
			i++;
		}	
	}
	ft_putchar('\n');
	return (0);
}
