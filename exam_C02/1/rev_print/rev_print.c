#include <unistd.h>

char *ft_rev_print(char *str)
{
    int j;

    j = 0;
    while (str[j])
        j++;
    j = j - 1;
    while (j >= 0)
    {
        write(1, &str[j], 1);
        j--;
    }
    write(1, "\n", 1);
    return (str);
}

int main()
{
    ft_rev_print("karim");
}