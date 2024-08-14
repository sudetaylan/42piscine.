#include <unistd.h>

void	aff_a(char *str)
{
	int		i;
	char	x;
	char	y;

	i = 0;
	x = 'a';
	y = '\n';
	while (str[i] != '\0')
	{
		if (str[i] == x)
		{
			write(1, &x, 1);
		}
		write(1, &y, 1);
		i++;
	}
	while (str[i] == '\0')
	{
		write(1, &x, 1);
		write(1, &y, 1);
		i++;
	}
}
int main(void)
{
	aff_a("z sent le poney");
}