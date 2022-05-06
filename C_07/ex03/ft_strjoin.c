/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaouki <kchaouki@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:07:31 by kchaouki          #+#    #+#             */
/*   Updated: 2022/04/09 23:05:44 by kchaouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int	ft_total_lent(int size, char **strs, char *sep)
{
	int	i;
	int	final_len;

	i = 0;
	final_len = 0;
	while (i < size)
	{
		final_len += ft_strlen(strs[i]);
		i++;
	}
	final_len += (size - 1) * ft_strlen(sep);
	return (final_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	len = ft_strlen(dest);
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*final_str;
	int		i;

	if (size == 0)
		return (malloc(sizeof(char)));
	final_str = malloc(sizeof(char) * ft_total_lent(size, strs, sep) + 1);
	if (!final_str)
		return (NULL);
	*final_str = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(final_str, strs[i]);
		if (i < (size - 1))
			ft_strcat(final_str, sep);
		i++;
	}
	return (final_str);
}
