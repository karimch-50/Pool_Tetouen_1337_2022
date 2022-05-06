#include <unistd.h>
void ft_rev_print(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    i--;
    while (i >= 0)
    {
        write(1, &str[i], 1);
        i--;
    }   
}
int main(int argc, char **argv)
{
    int len;
    char str[1000];
    int i;
    i = 0;
    if (argc == 2)
    {
        len = 0;
        while (argv[1][len])
            len++;
        len--;
        while (len >= 0)
        {
            if (argv[1][len] == ' ' || argv[1][len] == '\t')
                len--;
            else
            {
                str[i++] = argv[1][len];
                len--;
                if (argv[1][len] == ' ' || argv[1][len] == '\t')
                {
                    break;
                    str[i] = '\0';
                }
            }
        }
        ft_rev_print(str);
    }
    write(1, "\n", 1);
    return (0);
}