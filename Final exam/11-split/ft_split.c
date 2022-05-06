// Assignment name  : ft_split
// Expected files   : ft_split.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes a string, splits it into words, and returns them as
// a NULL-terminated array of strings.

// A "word" is defined as a part of a string delimited either by spaces/tabs/new
// lines, or by the start/end of the string.

// Your function must be declared as follows:

// char    **ft_split(char *str);

#include <stdlib.h>

int check_sep(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

int count_words(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && check_sep(str[i]))
			i++;
		if (str[i])
			count++;
		while (str[i] && !check_sep(str[i]))
			i++;
	}
	return (count);
}

char *ft_word(char *str)
{
	int i;
	int word_len;
	char *word;

	word_len = 0;
	while (str[word_len] && !check_sep(str[word_len]))
		word_len++;
	word = malloc(sizeof(char) * word_len + 1);
	i = 0;
	while (i < word_len)
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

char    **ft_split(char *str)
{
	int i;
	int j;
	char **split;

	split = malloc(sizeof(char *) * count_words(str) + 1);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && check_sep(str[i]))
			i++;
		if (str[i])
			split[j++] = ft_word(&str[i]);
		while (str[i] && !check_sep(str[i]))
			i++;
	}
	split[j] = 0;
	return (split);
}

#include <stdio.h>

int main(void)
{
	char test[] = "hello	my name is karim";
	char **split;
	int i;

	i = 0;
	split = ft_split(test);
	while (split[i])
	{
		printf("%s\n",split[i]);
		i++;
	}
}