// Assignment name  : ft_range
// Expected files   : ft_range.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write the following function:

// int     *ft_range(int start, int end);

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at start and end at end (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 1, 2 and 3.
// - With (-1, 2) you will return an array containing -1, 0, 1 and 2.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing 0, -1, -2 and -3.

// #include <stdlib.h>

// int     *ft_range(int start, int end)
// {
// 	int *range;
// 	int len;
// 	int i;

// 	len = end - start;
// 	if (len == 0)
// 		range = 0;
// 	else if (len < 0)
// 		len *= -1;
// 	range = malloc(sizeof(int) * len);
// 	i = 0;
// 	if (end < start)
// 	{
// 		while (i <= len)
// 			range[i++] = start--;
// 	}
// 	while (i <= len)
// 		range[i++] = start++;
// 	return (range);
// }

// int        ft_abs(int x)
// {
//     if (x < 0)
//         return (-x);
//     return (x);
// }

#include <stdio.h>


// int        main(void)
// {
//     int *tab;
//     int i = 0;
//     int start = 0;
//     int end = 0 ;
//     int size = ft_abs(end - start) + 1;
//     //(1, 3)
// 	//(-1, 2)
// 	// (0, -3)
//     tab = ft_range(start, end);
//     while(i < size)
//     {
//     	printf("%i, ", tab[i]);
//     	i++;
//     }
// }


#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int     *ft_range(int start, int end)
{
    int i;
    int *tab;
    int a;
    a = (end - start);
    if(a < 0)
        a *= -1;
    i = 0;   
    tab = malloc(sizeof(int *) * (a +1));

    while(end > start)
        tab[i++] = start++;
        
    while(start >= end)
        tab[i++] = start--;
    return(tab);
}

int main(void)
{
    int *range;
    int i;
    i = 0;
    range = ft_range(0, 0);
    	while(i < 7)
	{
		printf("%d", range[i]);
		i++;
	}
}