/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dade-jes <willtrigo@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 05:29:07 by dade-jes          #+#    #+#             */
/*   Updated: 2022/02/13 06:58:56 by dade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_numbers(int len, int max, char *str);
int		ft_strlen(char *str);
void	ft_putchar(int i, int breakline, char *c);
void	ft_create_game(int type_size, char *str);

#define MAP_SIZE_3X3 17
#define MAP_SIZE_4X4 31
#define MAP_SIZE_5X5 49

void	ft_check_map(char *str)
{
	int	len_str;

	len_str = ft_strlen(str);
	if (len_str == MAP_SIZE_3X3 && ft_check_numbers(len_str, 3, str))
	{
		ft_create_game(3, str);
	}
	else if (len_str == MAP_SIZE_4X4 && ft_check_numbers(len_str, 4, str))
	{
		ft_create_game(4, str);
	}
	else if (len_str == MAP_SIZE_5X5 && ft_check_numbers(len_str, 5, str))
	{
		ft_create_game(5, str);
	}
	else
		ft_putchar(5, 1, "Error");
}
