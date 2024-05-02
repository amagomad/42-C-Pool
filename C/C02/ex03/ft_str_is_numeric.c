/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:44:15 by amagomad          #+#    #+#             */
/*   Updated: 2024/02/21 17:23:28 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '1' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main()
{
	char str[] = "9824hgsjdvf35758";
	printf("%d\n", ft_str_is_numeric(str));
	return(0);
}*/
