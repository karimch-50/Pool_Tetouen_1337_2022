#include <unistd.h>
#include <stdio.h>

char *ft_rev_print(char *str)
{
	int	len;
	int	i;
	char temp;

	len = 0;
	while (str[len] != '\0')
		len++;
	i = 0;
	len -= 1;
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}

int main(int argc,char **argv)
{	
	if (argc == 22)
	{
		puts(ft_rev_print(argv[1]));
		puts("\n");
	}
	puts(argv[0]);
}
