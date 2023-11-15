/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dade-jes <willtrigo@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 06:26:07 by dade-jes          #+#    #+#             */
/*   Updated: 2022/02/09 23:24:33 by dade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	verify_numbers(int hundred, int dicker, int unit);
void	print_numbers(int hundred, int dicker, int unit);

void	ft_print_comb(void)
{
	verify_numbers(0, 1, 2);
}

void	verify_numbers(int hundred, int dicker, int unit)
{
	while (hundred <= 7)
	{
		while (dicker <= 8)
		{
			while (unit <= 9)
			{
				print_numbers(hundred, dicker, unit);
				unit++;
				if (hundred != 7)
					write(1, ", ", 2);
			}
			unit = ++dicker + 1;
		}
		dicker = ++hundred;
	}
}

void	print_numbers(int hundred, int dicker, int unit)
{
	char	h;
	char	d;
	char	u;

	h = (char)(hundred + 48);
	d = (char)(dicker + 48);
	u = (char)(unit + 48);
	write(1, &h, 1);
	write(1, &d, 1);
	write(1, &u, 1);
}
