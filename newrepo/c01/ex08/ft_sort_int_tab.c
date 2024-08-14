/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staylan <staylan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:35:17 by staylan           #+#    #+#             */
/*   Updated: 2024/02/05 16:45:19 by staylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	dif;

	while (size >= 0)
	{
		x = 0;
		while (x < size - 1)
		{
			if (tab[x] > tab[x + 1])
			{
				dif = tab[x];
				tab[x] = tab[x + 1];
				tab[x + 1] = dif;
			}
			x++;
		}
		size--;
	}
}
