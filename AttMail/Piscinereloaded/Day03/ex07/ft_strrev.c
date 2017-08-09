/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 15:58:07 by llacaze           #+#    #+#             */
/*   Updated: 2017/08/01 16:48:58 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	char	a;
	int	i;
	int	len;

	len = ft_strlen(str) - 1;
	i = 0;
	while (i != len)
	{
		a = str[len];
		str[len] = str[i];
		i++;
		len--;
	}
	return (str);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%s", ft_strrev(av[1]));
	return (0);
}
