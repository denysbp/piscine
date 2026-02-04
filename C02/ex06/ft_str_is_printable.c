#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > 0 && str[i] <= 31)
        {
            return (0);
        }
        else if (str[i] > 126)
            return (0);
        i++;
    }
    return (1);
}


int main()
{
    char    *st;

    st = "\n";

    printf(":%d",ft_str_is_printable(st));
}