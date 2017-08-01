/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 02:12:07 by llacaze           #+#    #+#             */
/*   Updated: 2017/08/01 02:17:45 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char chiffre;

	chiffre = '0';
	while (chiffre <= '9')
	{
		ft_putchar(chiffre);
		chiffre++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
