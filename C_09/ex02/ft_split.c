/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchaouki <kchaouki@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:36:56 by kchaouki          #+#    #+#             */
/*   Updated: 2022/04/13 13:39:16 by kchaouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && !check_sep(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && check_sep(str[i], charset))
			i++;
	}
	return (count);
}

void	*ft_word(char *str, char *charset)
{
	int		i;
	int		word_len;
	char	*word;

	i = 0;
	word_len = 0;
	while (str[word_len] && !check_sep(str[word_len], charset))
		word_len++;
	word = malloc(sizeof(char) * word_len + 1);
	while (i < word_len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	int		j;

	split = malloc(sizeof(char *) * ft_count_words(str, charset) + 1);
	if (!split)
		return (0);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && check_sep(str[i], charset))
			i++;
		if (str[i])
			split[j++] = ft_word(&str[i], charset);
		while (str[i] && !check_sep(str[i], charset))
			i++;
	}
	split[j] = 0;
	return (split);
}
