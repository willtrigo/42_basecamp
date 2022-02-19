/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dade-jes <willtrigo@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 00:52:37 by dade-jes          #+#    #+#             */
/*   Updated: 2022/02/19 02:21:41 by dade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>

char *ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[++i])
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	return (str);
}
