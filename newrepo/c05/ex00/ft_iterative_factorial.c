/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staylan <staylan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 02:03:59 by staylan           #+#    #+#             */
/*   Updated: 2024/02/12 21:54:47 by staylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	result = 1;
	i = 1;
	while (i <= nb && nb != 0)
	{
		result = result * i;
		i++;
	}
	if (nb < 0)
	{
		result = 0;
	}
	return (result);
}
