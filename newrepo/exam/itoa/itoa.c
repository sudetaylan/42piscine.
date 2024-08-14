#include <stdlib.h>

int itrlen(nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
	{
		return 11;
	}
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}
char	*ft_itoa(int nbr)
{
	char		*p;
	int			x;
	long int	nb;

	nb = nbr;
	x = itrlen(nb);
	p = (char *)malloc(sizeof(char) * (x + 1));
	if (!p)
		return (0);
	if (nb < 0)
	{
		nb *= -1;
		p[0] = '-';
	}
	p[x] = '\0';
	x--;
	while (nb > 0)
	{
		p[x] = nb % 10 + '0';
		nbr /= 10;
		x--;
	}
	return (p);
}

#include <stdio.h>

int main()
{
	printf("%s", ft_itoa(-2147483648));
	return 0;
}
