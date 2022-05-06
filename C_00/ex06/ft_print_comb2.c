/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaouki <kchaouki@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 19:19:05 by kchaouki          #+#    #+#             */
/*   Updated: 2022/03/25 23:13:23 by kchaouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_two_num(int nbr)
{
	int	n1;
	int	n2;

	n1 = (nbr / 10) + 48;
	n2 = (nbr % 10) + 48;
	write(1, &n1, 1);
	write(1, &n2, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_two_num(a);
			write(1, " ", 1);
			print_two_num(b);
			if (a < 98 && b <= 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
