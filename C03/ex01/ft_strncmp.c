int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if ( i == n)//stop cuz
	{
		return (0);
	}
	return ((unsigned int)s1[i] - (unsigned int)s2[i]);
}
