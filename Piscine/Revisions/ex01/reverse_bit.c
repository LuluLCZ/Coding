/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 17:57:09 by llacaze           #+#    #+#             */
/*   Updated: 2017/07/26 18:03:56 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bit(unsigned char octet)
{
	unsigned char	resultat;
	int				compteur;

	resultat = 0;
	compteur = 8;
	while (compteur != 0)
	{
		resultat = resultat * 2 + (unsigned char)(octet % 2);
		octet = octet / 2;
		count--;
	}
	return (resultat);


