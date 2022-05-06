/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaouki <kchaouki@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 09:42:17 by kchaouki          #+#    #+#             */
/*   Updated: 2022/03/25 22:54:13 by kchaouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
void ft_print_combn(n)
{
	int index;;
	int nums[n];
	while (index < n)
	{
		nums[index] = '0';
		i++;
	}

	while (ft_end(nums, n) != 1)
	{
		if(nums[n - 1] == '9')
		{
			index = n - 1;
			while (nums[index] == '9')
			{
				
				index --;
			}
		}

	}
}


int main(void)
{
	ft_print_combn(1);
	return 0;
}
