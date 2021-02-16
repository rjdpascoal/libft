/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpascoal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 18:26:27 by rpascoal          #+#    #+#             */
/*   Updated: 2021/02/10 12:28:21 by rpascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int signal;
	int number;
	int cont;
	int sum;

	signal = 1;
	number = 0;
	cont = 0;
	while (str[cont] == 32 || (str[cont] >= 9 && str[cont] <= 13))
		cont++;
	while (str[cont] == '-' || str[cont] == '+')
	{
		if (str[cont] == '-')
			signal = signal * -1;
		cont++;
	}
	while (str[cont] >= '0' && str[cont] <= '9')
	{
		number = number * 10;
		sum = (str[cont] - '0');
		number = number + sum;
		cont++;
	}
	number = number * signal;
	return (number);
}
