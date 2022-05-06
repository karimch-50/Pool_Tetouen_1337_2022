/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 11:37:11 by msodor            #+#    #+#             */
/*   Updated: 2022/03/27 11:37:14 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	check(int x, int y, int i, int j);

void	rush(x, y)
{
	int	i;
	int	j;

	i = 0;
	if (x > 0 && y > 0)
	{
		while (i < y)
		{
			j = 0;
			while (j < x)
			{
				check(x, y, i, j);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}

void	check(int x, int y, int i, int j)
{
	if (i == 0 || i == y - 1 || j == 0 || j == x - 1)
	{
		if ((j == 0 && i == 0) || (j == x - 1 && i == 0))
		{
			ft_putchar('A');
		}
		else if ((j == 0 && i == y - 1) || (j == x - 1 && i == y - 1))
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
	}
	else
	{
		ft_putchar(' ');
	}
}
