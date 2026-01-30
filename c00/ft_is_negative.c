#include <unistd.h>

void    ft_is_negative(int n)
{
    char p = 'P';
    char m = 'N';
    if (n < 0)
    {
        write(1, &m, 1);
    }
    else
    {
        write(1, &p, 1);
    }
}