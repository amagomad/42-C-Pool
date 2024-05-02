/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:04:04 by amagomad          #+#    #+#             */
/*   Updated: 2024/03/07 13:21:58 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			
		else
			i++;
	}
	return (str);
}
/*int main()
{
	char	*str = "salut les amis";
	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
