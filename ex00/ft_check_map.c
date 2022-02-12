/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dade-jes <willtrigo@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 05:29:07 by dade-jes          #+#    #+#             */
/*   Updated: 2022/02/12 18:13:07 by dade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);
void	ft_putchar(int i, int breakline, char *c);
void	ft_create_game(char *resolution);

#define MAP_SIZE_3X3 23
#define MAP_SIZE_4X4 31
#define MAP_SIZE_5X5 39
#define ERR "Error"

void	ft_check_map(char *str)
{
	int		len_str;

	len_str = ft_strlen(str);
	if (len_str == MAP_SIZE_3X3)
	{
		ft_create_game("1 2 3 4 \n 2 3 4 1 \n  3 4 1 2 \n 4 1 2 3 \n");
	}
	else if (len_str == MAP_SIZE_4X4)
	{
		ft_create_game("1 2 3 4 \n 2 3 4 1 \n  3 4 1 2 \n 4 1 2 3 \n");
	}
	else if (len_str == MAP_SIZE_5X5)
	{
		ft_create_game("1 2 3 4 \n 2 3 4 1 \n  3 4 1 2 \n 4 1 2 3 \n");
	}
	else
		ft_putchar(5, 1, ERR);
}
