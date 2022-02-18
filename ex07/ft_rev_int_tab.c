/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dade-jes <willtrigo@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:54:41 by dade-jes          #+#    #+#             */
/*   Updated: 2022/02/18 05:48:13 by dade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_tab(int *a, int *b);

void 	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		swap_tab(&tab[i], &tab[size -1]);
		i++;
		size--;
	}
}

void	swap_tab(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
