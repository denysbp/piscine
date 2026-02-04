#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 32 && str[i] <= 64)
        {
            return (0);
        }
        else if (str[i] >90 && str[i] <96 || str[i] > 122)
            return (0);
        i++;
    }
    return (1);
}


int main()
{
    char    *st;

    st = "olamndo'";

    printf(":%d",ft_str_is_alpha(st));
}