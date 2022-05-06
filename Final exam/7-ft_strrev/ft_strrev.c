// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:

// char    *ft_strrev(char *str);


char    *ft_strrev(char *str)
{
	char tmp;
	int len;
	int i;

	len = 0;
	while (str[len])
		len++;
	len--;
	i = 0;
	while (len > 0)
	{
		tmp = str[len];
		str[len] = str[i];
		str[i] = tmp;
		i++;
		len--;
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
	char test[] = "karim";
	puts(ft_strrev(test));
}