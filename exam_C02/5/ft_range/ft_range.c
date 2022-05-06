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

#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
    int *range;
    int i;
    int len;

    len = (end - start);
    if (len == 0)
    {
        range = malloc(sizeof(int));
        range[0] = 0;
    }
    else if (len < 0)
    {
        len *= -1;
        range = malloc(sizeof(int) * len);
        i = 0;
        while (i <= len)
        range[i++] = start--;
    }
    else
    {
        if (start < 0 && end > 0)
        {
            len += 1;
            range = malloc(sizeof(int) * len);
            i = 0;
            while (i < len)
            {
                range[i++] = start++;
            }
        }
        else
        {
            range = malloc(sizeof(int) * len);
            i = 0;
            while (i <= len)
            range[i++] = start++;
        }
    }
    return (range);
}

int main(void)
{
    int *range;
    int i;
    range = ft_range(0, -3);

    i = 0;
    while (i < 4)
    {
        printf("%d",(int)range[i]);
        i++;
    }
    //printf("%d",(int)range[0]);
}
