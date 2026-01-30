void	ft_ultimate_div_mod(int *a,int *b)
{
	div = (*a / *b);
	res = (*a % *b);
	*a = div;
	*b = rest;
}