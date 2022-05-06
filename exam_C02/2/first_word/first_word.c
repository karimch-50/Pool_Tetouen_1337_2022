#include <unistd.h>
int main(int argc, char **argv)
{
    int i;
    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
                i++;
            else
            {
                write(1, &argv[1][i], 1);
                i++;
                if (argv[1][i] == ' ' || argv[1][i] == '\t')
                    break;
            }
        }
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
}