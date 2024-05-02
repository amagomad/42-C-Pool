/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:24:06 by amagomad          #+#    #+#             */
/*   Updated: 2024/03/04 14:20:01 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	i;

	if (index == 1)
		return (1);
	else if (index < 0)
		return (-1);
	else if (index > 1)
	{
		i = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (i);
	}
	return (0);
}
/*int main ()
{
	printf("%d", ft_fibonacci(45));
}*/
