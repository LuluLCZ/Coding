/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 01:27:18 by llacaze           #+#    #+#             */
/*   Updated: 2017/08/01 01:28:09 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#insert <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
