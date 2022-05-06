#include <unistd.h>
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (0);
	range = malloc((max - min) * sizeof(int));
	if (!range)
		return ((int *)0);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

int	main(void)
{
	int *numbers;
	int len_nums;
	int	i;

	numbers = ft_range(1, 10);
	len_nums = 0;
	while (numbers[len_nums] != '\0')
		len_nums++;
	i = 0;
	while (i < len_nums)
	{
		write(1, &numbers[i], 1);
		i++;
	}
}
