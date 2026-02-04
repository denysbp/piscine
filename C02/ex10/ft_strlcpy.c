#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i=0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    valor = ft_strlen(src);

    while (*src && -- size)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (valor);
}

int main()
{
    char    *n;
    char    *aqui="ola mundo";
    printf("Ft:%d",ft_strlcpy(n,aqui,1));
}