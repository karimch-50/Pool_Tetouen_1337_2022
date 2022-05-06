void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

#include <stdio.h>

int main()
{
    int i = 10;
    int j = 5;
    ft_swap(&i, &j);
    printf("%d\n%d", i , j);
}