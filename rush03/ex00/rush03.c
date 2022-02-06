/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrenato- < jrenato-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:44:56 by dade-jes          #+#    #+#             */
/*   Updated: 2022/02/06 22:58:09 by jrenato-         ###   ########.fr       */
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
		if (x_line == 1)
			ft_putchar('A');
		else if (x_line == x_total)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (x_line == 1 || x_line == x_total)
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
		x_line = 1;
		y_column++;
		ft_putchar('\n');
	}
	else
		x_line++;
	if (y_column <= y_total && y_total > 0)
		add_chars(x_line, x_total, y_column, y_total);
}
