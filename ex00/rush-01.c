/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dade-jes <willtrigo@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 00:50:10 by dade-jes          #+#    #+#             */
/*   Updated: 2022/02/12 16:30:44 by dade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_check_map(char *str);
void	ft_putchar(int i, int breakline, char *c);

#define ERR "Error"

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_check_map(argv[1]);
	}
	else
		ft_putchar(5, 1, ERR);
	return (0);
}
