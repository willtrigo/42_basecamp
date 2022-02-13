/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_game.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dade-jes <willtrigo@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 05:42:06 by dade-jes          #+#    #+#             */
/*   Updated: 2022/02/13 05:27:10 by dade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(int i, int breakline, char *c);

#define ERR "Error"

void	ft_create_game(int type_size, char *str)
{
	int		i;
	char	*game;

	game = str;
	if (type_size == 3)
		game = "1 2 3 \n 2 3 4 \n  3 4 1 \n\0";
	if (type_size == 4)
		game = "1 2 3 4\n 2 3 1 4 \n 3 2 4 1 \n 3 2 4 1 \n\0";
	if (type_size == 5)
		game = "1 2 3 5 1 \n 2 5 2 3 4 \n 1 3 3 4 1 \n 1 3 3 4 1 \n 1 3 3 4 1 \n\0";
	i = 0;
	while (game[i] != '\0')
	{
		if (game[i] != ' ')
			ft_putchar(1, 0, &game[i]);
		i++;
	}
}
/*
int *linha1;
    int *linha2;
    int *linha3;
    int *linha4;

    int **colunas;

    linha1 = malloc(4 * sizeof( int ) );
    linha2 = malloc(4 * sizeof( int ) );
    linha3 = malloc(4 * sizeof( int ) );
    linha4 = malloc(4 * sizeof( int ) );

    // | colunas[0] -> linha1 { 0 2 2 3 }
    // | colunas[1] -> linha2 { 3 5 3 1 }
    // | colunas[2] -> linha3 { 3 5 8 5 }
    // | colunas[3] -> linha4 { 1 8 9 2 }



    colunas = malloc( 4 * sizeof( int* ) );

    linha1[1] = 2;
    linha2[0] = 2;
    linha3[0] = 2;
    linha4[0] = 2;

    colunas[0] = linha1;
    colunas[1] = linha2;
    colunas[2] = linha3;
    colunas[3] = linha4;


    printf("%d", p2[0][0] );

    free(colunas);
    free(linha1);
    free(linha2);
    free(linha3);
    free(linha4);*/
