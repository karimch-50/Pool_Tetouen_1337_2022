/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaouki <kchaouki@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 08:07:35 by kchaouki          #+#    #+#             */
/*   Updated: 2022/03/31 06:15:01 by kchaouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && n != 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	while (n != 0)
	{
		dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}
