#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > 0 && str[i] <= 47)
        {
            return (0);
        }
        else if (str[i] > 57)
            return (0);
        i++;
    }
    return (1);
}


int main()
{
    char    *st;

    st = "R899HGG";

    printf(":%d",ft_str_is_numeric(st));
}