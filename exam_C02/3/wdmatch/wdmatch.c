#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int main(int argc, char **argv)
{
    char *tmp;

    if (argc == 3)
    {
        tmp = argv[1];
        while (*tmp && *argv[2])
        {
            while (*tmp == *argv[2] && (*tmp && *argv[2]))
            {
                tmp++;
                argv[2]++;
            }
            argv[2]++;
        }
        if (!*tmp)
            ft_putstr(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
}