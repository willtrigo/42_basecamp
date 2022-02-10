/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dade-jes <willtrigo@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 07:17:39 by dade-jes          #+#    #+#             */
/*   Updated: 2022/02/10 02:17:50 by dade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(int col1, int col2);

void	ft_print_comb2(void)
{
	int	col1;
	int	col2;

	col1 = 0;
	while (col1 <= 98)
	{
		col2 = 1;
		while (col2 <= 99)
		{
			if (col1 != col2)
				print_numbers(col1, col2);
			col2++;
		}
		col1++;
	}
}

void	print_numbers(int col1, int col2)
{
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	c1 = (char)(col1 / 10 + 48);
	c2 = (char)(col1 % 10 + 48);
	c3 = (char)(col2 / 10 + 48);
	c4 = (char)(col2 % 10 + 48);
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, " ", 1);
	write(1, &c3, 1);
	write(1, &c4, 1);
	if (!(col1 == 98 && col2 == 99))
		write (1, ", ", 3);
}
