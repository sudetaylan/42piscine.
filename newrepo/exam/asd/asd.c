#include <unistd.h>
#include <stdio.h>
int	ft_prime(int nb)
{
	int	x;

	x = 2;
	if (nb < 2)
		return (0);
	while (x <= nb / x)
	{
		if (nb % x == 0)
		{
			return (0);
		}
		x++;
	}
	return (1);
}
int	ft_add(int nb)
{
	int	i;
	int	result;

	i = 2;
	result = 0;
	if (nb < 2)
		return (0);
	while (i <= nb)
	{
		if (ft_prime(i) == 1)
		{
			result = result + i;
		}
		i++;
	}
	return (result);
}

int	main()
{
	printf("%d",ft_add(9));
}