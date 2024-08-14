/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staylan <staylan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:42:54 by staylan           #+#    #+#             */
/*   Updated: 2024/02/13 18:16:57 by staylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int			i;
	int			j;
	int			k;
	char		*p;

	i = 0;
	j = 0;
	k = 0;
	if (to_find[k] == '\0')
		return (str);
	while (to_find[k] != '\0')
		k++;
	while (str[i] != '\0')
	{
		while (str[i] == to_find[j])
			j++;
		i++;
		if (j == k)
		{
			p = &str[i - j];
			return (p);
		}
	}
	return (0);
}
