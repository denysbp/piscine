int	ft_strlen(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	c = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[c] = src[i];
		i++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
