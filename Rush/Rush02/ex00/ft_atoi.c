/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 09:00:52 by gacavali          #+#    #+#             */
/*   Updated: 2024/03/03 18:36:46 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_atoi(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		count++;
		if (str[i] == '-' || count == 2)
		{
			write(1, "Error\n", 6);
			return ;
		}
		i++;
	}
	while (str[i] >= 0 && str[i] <= 9)
	{
		i++;
	}
}
