/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dade-jes <willtrigo@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:44:56 by dade-jes          #+#    #+#             */
/*   Updated: 2022/02/06 02:16:44 by dade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void verify(int, int, int, int);

void rush(int x, int y)
{
	int x_line;
	int y_column;

	x_line = 0;
	y_column = 0;

	for (y_column = 0; y_column < y; y_column++)
	{
		for (x_line = 0; x_line < x; x_line++)
		{
			verify(x_line, x-1, y_column, y-1);
		}
		ft_putchar("\n");
		x_line = 0;
	}
}

void verify(int x_line, int x, int y_column, int y)
{
	if(y_column == 0 || y_column == y)
	{
		if (x_line == 0)
			ft_putchar("A");
		else if (x_line == x)
			ft_putchar("C");
		else
			ft_putchar("B");
	}
	else
	{
		if (x_line == 0 || x_line == x)
			ft_putchar("B");
		else
			ft_putchar(" ");
	}
}
