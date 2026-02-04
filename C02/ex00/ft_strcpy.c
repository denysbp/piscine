#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	if (dest == NULL)
	{
		return NULL;
	}
	
	int	i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int	main()
{
	char	dest[50];

	char	src[8] = "ola mundo";
	ft_print(dest,src);
	printf("ola mudo : %s",dest);
}
