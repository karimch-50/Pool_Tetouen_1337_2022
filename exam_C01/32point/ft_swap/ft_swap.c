#include <unistd.h>
#include <stdio.h>

void	ft_swap(int*a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int	a;
	int b;

	
	a = 15;
	b = 4;
	ft_swap(&a, &b);
	printf("%d\n%d", a, b);
}
