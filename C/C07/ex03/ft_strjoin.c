/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:13:39 by amagomad          #+#    #+#             */
/*   Updated: 2024/04/25 16:59:15 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strjoin_lenght(int size, char **strs, char *sep)
{
	int	res;
	int	a;

	res = 0;
	a = 0;
	while (a < size)
	{
		res = res + ft_strlen(strs[a]);
		if (a < size - 1)
			res = res + ft_strlen(sep);
		a++;
	}
	return (res);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*z;
	int		a;
	int		b;

	if (size == 0)
	{
		z = malloc(sizeof(char));
		z[0] = 0;
		return (z);
	}
	z = malloc(sizeof(char) * (ft_strjoin_lenght(size, strs, sep) + 1));
	z[0] = '\0';
	a = 0;
	b = 0;
	while (b < size)
	{
		ft_strcat(z, strs[b]);
		if (b < size - 1)
			ft_strcat(z, sep);
		b++;
	}
	return (z);
}
/*
int	main(void)
{
	char	*strs[] = { "Salut", "les", "amis" };
	char	*result = ft_strjoin(3, strs, " ");
	printf("%s\n", result);
	free(result);
}*/
