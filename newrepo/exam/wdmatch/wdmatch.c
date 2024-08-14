#include <unistd.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		x = ft_strlen(argv[1]);
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					x--;
					break ;
				}
				j++;
			}
			i++;
		}
		i = 0;
		if (x == 0)
		{
			while (argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
