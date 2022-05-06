#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main()
{
	char *string;
	int	count;
	string = "rida the dark man";
	count = ft_strlen(string);
	printf("%d", count);
}
