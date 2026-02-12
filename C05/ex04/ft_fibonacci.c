/*#include <stdio.h>*/

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

/*int main()
{
	int n;
	printf("choose one number legend: ");
	scanf("%d",&n);
	for(int i = 0; i <= n; i++)
	{
		printf("-%d",ft_fibonacci(i));
	}
}*/
