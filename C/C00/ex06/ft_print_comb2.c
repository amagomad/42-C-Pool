/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:32:54 by amagomad          #+#    #+#             */
/*   Updated: 2024/03/05 19:02:45 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <stdlib.h>

void	ft_print_comb2(void)
{
	int	w;
	int	x;
	int	y;
	int	z;

	y = 0;
	while (w != '9')
	{
		while (z <= '9')
		{
			w = '0';
			x = '0';
			write(1, &w, 1);
			write(1, &x, 1);
			write(1, &y, 1);
			write(1, &z, 1);
			if (y != '8')
				write(1, ", ", 2);
			while (y == '9' & z == '9')
			{
				while (w <= 9)
					x++;
			}
			z++;
		}
		y++;
	}
}
/*int main()
{
	ft_print_comb2();
	return (0);
}*/
