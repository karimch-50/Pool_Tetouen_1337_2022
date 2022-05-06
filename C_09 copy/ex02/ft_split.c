#include <stdlib.h>

int check_sep(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int ft_count_words(char *str, char *charset)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && check_sep(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && !check_sep(str[i], charset))
			i++;
	}
	return (count);
}

char *ft_word(char *str, char *charset)
{
	int i;
	int word_len;
	char *word;

	word_len = 0;
	while (str[word_len] && !check_sep(str[word_len], charset))
		word_len++;
	word = malloc(sizeof(char) * word_len + 1);
	i = 0;
	while (i < word_len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char **ft_split(char *str, char *charset)
{
	int i;
	int j;
	char **split;

	split = malloc(sizeof(char **) * ft_count_words(str, charset) + 1);
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

#include <stdio.h>

int main(void)
{
	char test[] = "Hello my name is@karim";
	char sep[] = " @";
	int i;
	char **split;

	split = ft_split(test, sep);
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
}