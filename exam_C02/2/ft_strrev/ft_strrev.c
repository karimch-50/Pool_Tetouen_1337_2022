char    *ft_strrev(char *str)
{
    char temp;
    int i;
    int len;
    
    i = 0;
    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    len--;
    while (i < (len - 1))
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }
    return (str);
}

#include <stdio.h>
int main()
{
    char test[] = "karim";
    puts(ft_strrev(test));
}