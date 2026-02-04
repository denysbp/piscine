#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > 0 && str[i] <= 96)
        {
            return (0);
        }
        else if (str[i] > 122)
            return (0);
        i++;
    }
    return (1);
}


int main()
{
    char    *st;

    st = "y";

    printf(":%d",ft_str_is_lowercase(st));
}