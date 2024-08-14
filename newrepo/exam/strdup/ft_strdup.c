#include <stdlib.h>
#include <stdio.h>

char   	*ft_strdup(char *src)
{
	int		i;
	char	*p;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	p = (char *)malloc((i + 1) * sizeof(char));
	if (!p)
	{
		return (0);
	}
	i = 0;
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
int main()
{
	printf("%s",ft_strdup("djdjdjdj"));
	return(0);
}