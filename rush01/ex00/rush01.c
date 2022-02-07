/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dade-jes <willtrigo@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 06:37:07 by dade-jes          #+#    #+#             */
/*   Updated: 2022/02/07 01:04:58 by dade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char str);
void	add_chars(int x_line, int x_total, int y_column, int y_total);
void	verify_break_line(int x_line, int x_total, int y_column, int y_total);

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
		add_chars(1, x, 1, y);
}

void	add_chars(int x_line, int x_total, int y_column, int y_total)
{
	if (y_column == 1 || y_column == y_total)
	{
		if ((x_line == 1 && y_column != y_total) || (x_line == x_total && y_column == y_total))
			ft_putchar('/');
		else if ((x_line == 1 && y_column == y_total) || x_line == x_total)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else
	{
		if (x_line == 1 || x_line == x_total)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
	verify_break_line(x_line, x_total, y_column, y_total);
}

void	verify_break_line(int x_line, int x_total, int y_column, int y_total)
{
	if (x_line == x_total)
	{
		x_line = 1;
		y_column++;
		ft_putchar('\n');
	}
	else
		x_line++;
	if (y_column <= y_total)
		add_chars(x_line, x_total, y_column, y_total);
}
