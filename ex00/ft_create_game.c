/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_game.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dade-jes <willtrigo@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 05:42:06 by dade-jes          #+#    #+#             */
/*   Updated: 2022/02/12 18:11:33 by dade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int i, int breakline, char *c);

void	ft_create_game(char	*resolution)
{
	int		i;

	i = 0;
	while (resolution[i] != '\0')
	{
		if (resolution[i] != ' ')
			ft_putchar(1, 0, &resolution[i]);
		i++;
	}
}
