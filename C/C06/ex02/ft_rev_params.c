/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:12:17 by amagomad          #+#    #+#             */
/*   Updated: 2024/02/29 12:22:25 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	argc--;
	while (argc > 0)
	{
		i = 0;
		while (argv[argc][i] != '\0')
		{
			write(1, &argv[argc][i], 1);
			i++;
		}
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
