/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: staylan <staylan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 21:08:30 by staylan           #+#    #+#             */
/*   Updated: 2024/02/08 21:59:10 by staylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (argc == 2 && argv[1][i] == 32)
	{
		i++;
	}
	if (argc == 2 && *argv[1])
	{
		while (argv[1][i] != ' ')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		return (0);
	}
	return (0);
}
