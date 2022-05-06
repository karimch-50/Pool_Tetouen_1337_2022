#include <unistd.h>

void print_chars(char *s1, char *s2)
{
    int i;
    int tab[256] = {0};
    
    i = 0;
    while (s2[i])
        tab[(int)s2[i++]] = 1;
    i = 0;
    while (s1[i])
    {
        if (tab[(int)s1[i]] == 1)
        {
            write(1, &s1[i], 1);
            tab[(int)s1[i]] = 2;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
        print_chars(argv[1],argv[2]);
    write(1, "\n", 1);
}