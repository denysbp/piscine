void	ft_ultimate_div_mod(int *a,int *b)
{
	float	div;
	float	resto;

	div = (*a / *b);
	resto = (*a % *b);
	*a = div;
	*b = resto;
}