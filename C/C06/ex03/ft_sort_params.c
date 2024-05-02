/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:07:42 by amagomad          #+#    #+#             */
/*   Updated: 2024/03/03 17:28:23 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = 1;
	while (a < argc - 1)
	{
		b = 1;
		while (b < argc - 1)
		{
			if (ft_strcmp(argv[b], argv[b + 1]) > 0)
			{
				ft_swap(&argv[b], &argv[b + 1]);
			}
			b++;
		}
		a++;
	}
	b = 1;
	while (b < argc)
	{
		ft_putstr(argv[b]);
		b++;
	}
	return (0);
}
