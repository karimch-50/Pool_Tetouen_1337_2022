/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaouki <kchaouki@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 22:09:10 by kchaouki          #+#    #+#             */
/*   Updated: 2022/04/02 10:08:26 by kchaouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (*str++ != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	len = i + j;
	if (size == 0 || size <= i)
		return (size + j);
	size = size - i - 1;
	j = 0;
	while (src[j] != '\0' && j < size)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (len);
}
