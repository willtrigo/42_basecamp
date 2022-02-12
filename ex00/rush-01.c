/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dade-jes <willtrigo@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 00:50:10 by dade-jes          #+#    #+#             */
/*   Updated: 2022/02/12 22:47:15 by dade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_check_map(char *str);
void	ft_putchar(int i, int breakline, char *c);

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_check_map(argv[1]);
	else
		ft_putchar(5, 1, "Error");
	return (0);
}
