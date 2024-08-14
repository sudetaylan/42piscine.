/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staylan <staylan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:29:05 by staylan           #+#    #+#             */
/*   Updated: 2024/02/13 15:40:36 by staylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	if (nb <= 2)
		return (2);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			count++;
		i++;
	}
	if (count != 1)
	{
		nb++;
		return (ft_find_next_prime(nb));
	}
	return (nb);
}
