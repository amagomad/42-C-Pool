/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:42:28 by amagomad          #+#    #+#             */
/*   Updated: 2024/03/04 16:19:07 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb > 0)
	{
		while (i * i <= nb)
		{
			if (i >= 46341)
				return (0);
			else if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
/*int main()
{
	printf("%d", ft_sqrt(9));
	return (0);
}*/
