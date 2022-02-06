/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dade-jes <willtrigo@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:44:56 by dade-jes          #+#    #+#             */
/*   Updated: 2022/02/06 04:42:20 by dade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char str);

void	add_chars(int x_line, int x_total, int y_column, int y_total);
void	verify_break_line(int x_line, int x_total, int y_column, int y_total);

void	rush(int x, int y)
{
	if (x >= 0 && y >= 0)
		add_chars(0, x, 0, y);
}

void	add_chars(int x_line, int x_total, int y_column, int y_total)
{
	if (y_column == 0 || y_column == y_total)
	{
		if (x_line == 0)
			ft_putchar('A');
		else if (x_line == x_total)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (x_line == 0 || x_line == x_total)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
	verify_break_line(x_line, x_total, y_column, y_total);
}

void	verify_break_line(int x_line, int x_total, int y_column, int y_total)
{
	if (x_line == x_total)
	{
		x_line = 0;
		y_column++;
		ft_putchar('\n');
	}
	else
		x_line++;
	if (y_column <= y_total && y_total > 0)
		add_chars(x_line, x_total, y_column, y_total);
}
