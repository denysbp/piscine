int	ft_strcmp(char *s1, char *s2)
{
	int len;

	len = 0;

	while(s1[len] == s2[len] && s1[len] != '\0' && s2[len] != '\0')
	{
		len++;
	}
	return ((unsigned char)s1[len] - (unsigned char)s2[len]);
}
