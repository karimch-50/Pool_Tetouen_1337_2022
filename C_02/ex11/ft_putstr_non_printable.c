/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaouki <kchaouki@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:03:23 by kchaouki          #+#    #+#             */
/*   Updated: 2022/03/31 02:18:40 by kchaouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	to_hexadecimal(int nbr)
{
	char	*hexadecimal;

	hexadecimal = "0123456789abcdef";
	if (nbr > 16)
	{
		to_hexadecimal(nbr / 16);
		to_hexadecimal(nbr % 16);
	}
	else
		write(1, &hexadecimal[nbr], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] == 127)
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			to_hexadecimal(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
