/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 11:36:40 by msodor            #+#    #+#             */
/*   Updated: 2022/03/27 11:36:42 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	check(int i, int j, int x, int y);

void	rush(int x, int y)
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
				check(i, j, x, y);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}

void	check(int i, int j, int x, int y)
{
	if (i == 0 || i == y - 1)
	{
		if (j == 0 || j == x - 1)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
	}
	else
	{
		if (j == 0 || j == x - 1)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}
