/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 17:10:43 by llacaze           #+#    #+#             */
/*   Updated: 2017/08/03 12:33:29 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	ft_strcmp(int *tab)
{
	int	a;
	int	tmp;

	tmp = 0;
	a = 0;
	while (tab[a + 1] != '\0')
	{
		if (tab[a] < tab[a + 1])
			a++;
		if (tab[a] > tab[a + 1])
		{
			tmp = tab[a];
			tab[a] = tab[a + 1];
			tab[a + 1] = tab[a];
			a = 0;
		}
	}
	return (*tab);
}

/*void	ft_sort_integer_table(int *tab, int size)
{
		ft_strcmp(tab);
}
*/
int	main(int ac, char **av)
{
	(void)av;
	int tab = 1689723987264;
	if (ac == 3)
		ft_strcmp(tab);
//		ft_sort_integer_table(atoi(av[1]), atoi(av[2]));
	return (0);
}
