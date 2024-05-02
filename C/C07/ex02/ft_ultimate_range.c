/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:19:29 by amagomad          #+#    #+#             */
/*   Updated: 2024/03/06 11:52:37 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	min_cpy;

	min_cpy = min;
	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (max - min_cpy);
}

/*int main()
{
	int	min = 2;
	int	max = 10;
	int	*range;
	int	i;

	i = 0;
	ft_ultimate_range(&range, min, max);
	while (i < max - min)
		{
			printf("%d\n", range[i]);
			i++;
		}
	free(range);
	return (0);
}*/
