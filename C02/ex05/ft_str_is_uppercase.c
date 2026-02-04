#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > 0 && str[i] <= 64)
        {
            return (0);
        }
        else if (str[i] > 90)
            return (0);
        i++;
    }
    return (1);
}


int main()
{
    char    *st;

    st = "L";

    printf(":%d",ft_str_is_uppercase(st));
}