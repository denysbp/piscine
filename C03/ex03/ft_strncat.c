int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);

}
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int	c;

	i = 0;
	c = ft_strlen(dest);
	if (nb == 0)
	{
		return (dest);
	}
	while (i < nb && src[i] != '\0')
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	dest[c] = '\0';
	if (nb == i)
	{
		return (dest);
	}
	return (dest);
}
