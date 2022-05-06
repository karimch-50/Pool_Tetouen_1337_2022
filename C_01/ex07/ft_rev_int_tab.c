/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaouki <kchaouki@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 00:50:59 by kchaouki          #+#    #+#             */
/*   Updated: 2022/03/28 19:35:52 by kchaouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}


int main()
{
	int x[6] = {1,2,3,4,5,6};

	printf("%d %d %d %d %d %d\n", x[0], x[1], x[2], x[3], x[4], x[5]);
	ft_rev_int_tab(x, 6);
	printf("%d %d %d %d %d %d\n", x[0], x[1], x[2], x[3], x[4], x[5]);


}
