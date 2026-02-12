int ft_iterative_power(int nb, int power)
{
	int	i;
	int	resultado;

	i = 1;
	resultado = nb;
	if ((nb == 0 && power == 0) || power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	while (i < power)
	{
		resultado *= nb;
		i++;
	}
	return (resultado);
}
