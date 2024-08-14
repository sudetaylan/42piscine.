
#include <unistd.h>
char	*ft_cameltosnake(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] = str[i] + 32;
			write(1, "_", 1);
		}
		write(1, &str[i], 1);
		i++;
	}
	return(str);
}
int main()
{
	char c[] = "hereIsACamelCaseWord";
	ft_cameltosnake(c);
	return 0;
}