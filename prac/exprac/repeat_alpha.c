#include <unistd.h>

int main(int ac, char *av[])
{
    int i = 0;
    char c;

    if (ac != 2)
        write (1, "\n", 1);
    else
    {
        while (c = av[1][i])
        {
            if (c >= 'A' && c <= 'Z')
                i = c - 'A' + 1;
            else if (c >= 'a' && c <= 'z')
                i = c - 'a' + 1;
            else
                i = 1;
            while (i--)
            {
                write (1, &c, 1);
            }
            i = 0;
            av[1]++;
        }
    }
    return 0;
}