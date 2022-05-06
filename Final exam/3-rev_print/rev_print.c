// Assignment name  : rev_print
// Expected files   : rev_print.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that takes a string and displays the string in reverse
// order followed by the newline.
// Its prototype is constructed like this : 
//   char *ft_rev_print (char *str)
// It must return its argument

// Examples:

// $> ./rev_print "zaz" | cat -e
// zaz$
// $> ./rev_print "dub0 a POIL" | cat -e
// LIOP a 0bud$
// $> ./rev_print | cat -e
// $

#include <unistd.h>

char *ft_rev_print (char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return (str);
}

int main()
{
	char test[] = "dub0 a POIL";
	ft_rev_print (test);
}