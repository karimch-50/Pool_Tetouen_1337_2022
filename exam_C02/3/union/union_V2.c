#include <unistd.h>

int	ft_has_char(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_union(char *str, char *united, int *position)
{
	int	i;
		
	i = 0;
	while (str[i])
	{
		if (ft_has_char(united, str[i]) == 0)
		{
			write(1, &str[i], 1);
			united[*position] = str[i];
			(*position)++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	position;
	char	str[1024];

	if (argc == 3)
	{
		position = 0;
		ft_union(argv[1], str, &position);
		ft_union(argv[2], str, &position);
	}
	write(1, "\n", 1);
	return (0);
}
