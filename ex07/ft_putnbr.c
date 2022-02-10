/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dade-jes <willtrigo@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:59:47 by dade-jes          #+#    #+#             */
/*   Updated: 2022/02/10 20:19:25 by dade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	print_numbers(char c);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		print_numbers('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		print_numbers(nb + '0');
	}
}

void	print_numbers(char c)
{
	write(1, &c, 1);
}
