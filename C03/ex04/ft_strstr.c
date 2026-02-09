char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	l;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		l = 0;
		while (str[i + l] != '\0' && str[i + l] == to_find[l])
		{
			if (to_find[l + 1] == '\0')
			{
				return (&str[i]);
			}
			++l;//while is ok continue count
		}	
		++i;//if l fail i run
	}
	return (0);//if not equal null
}
