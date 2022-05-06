/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msodor <msodor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 11:37:28 by msodor            #+#    #+#             */
/*   Updated: 2022/03/27 17:22:27 by msodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	top_bottom(int i, int j, int x, int y);
void	middle(int j, int x);
void	ft_putchar(char c);

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
				if (i == 0 || i == y - 1)
				{
					top_bottom(i, j, x, y);
				}
				else
				{
					middle(j, x);
				}
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}

void	top_bottom(int i, int j, int x, int y)
{
	if ((i == 0 && j == 0) || (i == y - 1 && j == x - 1 && x > 1 && y > 1))
		ft_putchar('A');
	else if ((i == 0 && j == x - 1) || (i == y - 1 && j == 0))
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	middle(int j, int x)
{
	if (j == 0 || j == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}
