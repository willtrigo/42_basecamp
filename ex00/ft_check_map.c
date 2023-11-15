/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbernard <hbernard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 05:29:07 by dade-jes          #+#    #+#             */
/*   Updated: 2022/02/13 22:07:33 by hbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_numbers(int len, int max, char *str);
int		ft_strlen(char *str);
void	ft_putchar(int i, int breakline, char *c);
void	ft_create_game(int type_size, char *str, int len_str);

#define BEHOLDER_3X3 23//4 * (3 * 2 ) - 1
#define BEHOLDER_4X4 31//4 * (4 * 2 ) - 1
#define BEHOLDER_5X5 39//4 * (5 * 2 ) - 1

void	ft_check_map(char *str)
{
	int	len_str;

	len_str = ft_strlen(str);
	if (len_str == BEHOLDER_3X3 && ft_check_numbers(len_str, 3, str))
	{
		ft_create_game(3, str, len_str);
	}
	else if (len_str == BEHOLDER_4X4 && ft_check_numbers(len_str, 4, str))
	{
		ft_create_game(4, str, len_str);
	}
	else if (len_str == BEHOLDER_5X5 && ft_check_numbers(len_str, 5, str))
	{
		ft_create_game(5, str, len_str);
	}
	else
		ft_putchar(5, 1, "Error");
}
