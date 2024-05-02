/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:02:28 by gacavali          #+#    #+#             */
/*   Updated: 2024/03/03 18:38:24 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_dict(void)
{
	int		i;
	int		file;
	int		r;
	char	buffer[800];

	i = 0;
	file = open("numbers.dict", O_RDONLY);
	if (file == -1)
	{
		write(1, "Error1\n", 7);
		return ;
	}
	r = read(file, buffer, 800);
	if (r == -1)
	{
		write(1, "Error2\n", 7);
		close(file);
		return ;
	}
}
