/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dade-jes <willtrigo@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 06:57:07 by dade-jes          #+#    #+#             */
/*   Updated: 2022/02/13 06:57:46 by dade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strtoint(char c);

int	ft_check_numbers(int len, int max, char *str)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (!(str[i] == ' '))
			if ((str[i] == '-') || ft_strtoint(str[i]) > max)
				return (0);
		i++;
	}
	return (1);
}
