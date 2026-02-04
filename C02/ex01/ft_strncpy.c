#include <stdio.h>
char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;

    i = 0;
    if (dest == NULL || src == NULL || n == 0) 
    {
        return (dest);
    }
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;    
    }
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

int main()
{
    char    *det;
    char    *source;

    source = "ola mundo";
    det;

    ft_strncpy(det,source,);
    printf("variavel: %s\n",det);
    printf("variavel: %s",source);
}