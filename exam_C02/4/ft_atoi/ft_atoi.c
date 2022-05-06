// Assignment name  : ft_atoi
// Expected files   : ft_atoi.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function, see the man.

// Your function must be declared as follows:

// int	ft_atoi(const char *str);
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
    int i = 0;
    int nb = 0;
    int ng = 1;

    if( str[i] == ' ' || str[i] == '\t')
    i++;
        //return (0);
    
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            ng *= -1;
        i++;
    }
    
   
    while(str[i] >= '0' && str[i] <= '9')
    {
        //nb = (nb *10 ) + str[i] - '0';
        nb *= 10;
        nb += str[i] - '0';
        i++;
    }
    return (nb * ng);
}


int main(void)
{
    char test[] = "1752890";
    printf("%d", ft_atoi(test));
}