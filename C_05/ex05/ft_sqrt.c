/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaouki <kchaouki@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 03:30:28 by kchaouki          #+#    #+#             */
/*   Updated: 2022/04/06 04:54:22 by kchaouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;

	i = 1;
	while (i * i < (long)nb)
		i++;
	if ((i * i) == nb)
		return (i);
	else
		return (0);
}
