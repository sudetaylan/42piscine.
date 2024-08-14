
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	final;

	i = 0;
	sign = 1;
	final = 0;
	while (str[i] == 45 || str[i] == 43 || str[i] == 32 || str[i] == '\t')
	{
		if (str[i] == 45)
		{
			sign = -1;
		}
		i++;
	}
	while (str[i] < 57 && str[i] > 48)
	{
		final = final * 10;
		final = final + str[i] - 48;
		i++;
	}
	return (final * sign);
}
#include <stdio.h>

int	main(void)
{
	printf("%d",ft_atoi("    832 63"));
}