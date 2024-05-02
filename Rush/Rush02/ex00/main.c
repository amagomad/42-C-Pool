/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:17:29 by gacavali          #+#    #+#             */
/*   Updated: 2024/03/03 18:36:10 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc < 3)
	{
		i = 1;
		while (i < argc)
		{
			ft_atoi(argv[1]);
			i++;
			return (0);
		}
	}
	write(1, "\n", 1);
	return (0);
}
