/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_game.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulvict < paulvict@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 05:42:06 by dade-jes          #+#    #+#             */
/*   Updated: 2022/02/13 23:30:46 by paulvict         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(int i, int breakline, char *c);
void	ft_strtoint(char str);

#define ERR "Error"

void	ft_create_game(int type_size, char *str, int len_str)
{
	int i;
	int i_beholder;
	int *beholder;
	
	beholder = (int*) malloc((type_size * type_size) * sizeof(int));
	i = 0;
	i_beholder = 0;
	while(i < len_str)
	{
		if (str[i] != ' ')
		{
			beholder[i_beholder] = (int)(str[i] - 48);
			//printf("endereço de beholder[%d] = %p \t valor = %d\n",i_beholder, &beholder[i_beholder], beholder[i_beholder]);
			i_beholder++;
		}
		i++;
	}
	
	int *board;
	int i_board;
	int ii;
	
	if(type_size == 3)
	{
		board = (int*) malloc (9 * sizeof(int));
	}
	else
	{
		board = (int*) malloc((type_size * type_size) * sizeof(int));
		i = 0;
		i_board = 0;
		ii = 1;
		while(i < i_beholder)
		{
			board[i_board] = 1;
			printf("%d", board[i_board]);
			i_board++;
			i++;	
			if(ii >= type_size)
			{
				ii = 0;
				printf("\n");
			}
			ii++;
		}
	}
	free (beholder);
	free (board);
	
	// int		i;
	// char	*game;

	// game = str;
	
	// if (type_size == 3)
	// 	game = "1 2 3 \n 2 3 4 \n  3 4 1 \n\0";
	// if (type_size == 4)
	// 	game = "1 2 3 4\n 2 3 1 4 \n 3 2 4 1 \n 3 2 4 1 \n\0";
	// if (type_size == 5)
	// 	game = "1 2 3 5 1 \n 2 5 2 3 4 \n 1 3 3 4 1 \n 1 3 3 4 1 \n 1 3 3 4 1 \n\0";
	// i = 0;
	// while (game[i] != '\0')
	// {
	// 	if (game[i] != ' ')
	// 		ft_putchar(1, 0, &game[i]);
	// 	i++;
	// }
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
