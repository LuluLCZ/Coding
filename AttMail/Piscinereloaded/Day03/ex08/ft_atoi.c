/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llacaze <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 16:51:52 by llacaze           #+#    #+#             */
/*   Updated: 2017/08/01 17:06:25 by llacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	nb;

	nb = 0;
	signe = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		if (str[i] == '-')
		{
			signe = -1;
		}
		if (str[i] == '+' || str[i] == '-')
			i++;
		if (str[i] >= '0' && str[i] <= '9')
		{
			nb = nb * 10 + str[i] - '0';
			i++;
		}
		return (signe * nb);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%s", ft_atoi(av[1]));
	}
	return (0);
}
