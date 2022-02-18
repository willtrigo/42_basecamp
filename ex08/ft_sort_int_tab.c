/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dade-jes <willtrigo@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 05:59:10 by dade-jes          #+#    #+#             */
/*   Updated: 2022/02/18 07:15:31 by dade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_tab_sort(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1] && i != (size - 1))
		{
			swap_tab_sort(&tab[i], &tab[i + 1]);
			i = 0;
			continue ;
		}
		i++;
	}
}

void	swap_tab_sort(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
