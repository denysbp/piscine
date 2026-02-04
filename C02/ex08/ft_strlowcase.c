#include <stdio.h>

char *ft_strlowercase(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >='A' && <= 'Z')
            str[i] += 32;
        i++;
    }
    return (str);
}


int main()
{
    char    st[] = "OLA";
    printf(":%s",ft_strlowercase(st));
}