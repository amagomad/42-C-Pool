/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:29:49 by amagomad          #+#    #+#             */
/*   Updated: 2024/03/04 16:05:22 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb != 1)
	{
		i = i * (nb - 1);
		nb--;
	}
	return (i);
}
/*int main()
{
	printf("%d", ft_iterative_factorial(12));
	return (0);
}*/
