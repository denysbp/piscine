int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	tamanho_dest;
	unsigned int	i;
	unsigned int	tamanho_src;

	tamanho_dest = ft_strlen(dest);
	tamanho_src = ft_strlen(src);
	i = 0;
	if (tamanho_dest > size)
		return (size + tamanho_src);
	while (i < tamanho_src && tamanho_dest + i < size - 1)
	{
		dest[tamanho_dest + i] = src[i];
		i++;
	}
	dest[tamanho_dest + i] = '\0';
	return (tamanho_dest + tamanho_src);
}
