/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staylan <staylan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:03:29 by staylan           #+#    #+#             */
/*   Updated: 2024/02/10 17:26:06 by staylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	final;

	i = 0;
	sign = 1;
	final = 0;
	while (str[i] == 45 || str[i] == 43 || str[i] == 32
		|| (str[i] <= 13 && str[i] >= 9))
	{
		if (str[i] == 45)
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] <= 57 && str[i] >= 48)
	{
		final = final * 10;
		final = final + str[i] - 48;
		i++;
	}
	return (final * sign);
}
