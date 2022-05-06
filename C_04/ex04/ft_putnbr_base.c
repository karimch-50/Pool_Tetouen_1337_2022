/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaouki <kchaouki@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:58:13 by kchaouki          #+#    #+#             */
/*   Updated: 2022/04/04 17:57:27 by kchaouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] == 127)
			return (0);
		j = 0;
		while (base[j] != '\0')
		{
			if (base[j] == base[j + 1])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	ft_strlen(char *base)
{
	int	size;

	size = 0;
	while (base[size] != '\0')
		size++;
	return (size);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				i;
	unsigned char	re_nbr[100];

	i = 0;
	if (is_valid(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr *= -1;
		}
		while (nbr)
		{
			re_nbr[i] = nbr % ft_strlen(base);
			nbr /= ft_strlen(base);
			i++;
		}
		while (i-- > 0)
			write(1, &base[re_nbr[i]], 1);
	}
}
