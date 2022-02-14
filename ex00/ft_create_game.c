/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_game.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dade-jes <willtrigo@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 05:42:06 by dade-jes          #+#    #+#             */
/*   Updated: 2022/02/14 02:02:51 by dade-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(int i, int breakline, char *c);
void	ft_strtoint(char str);
void	create_beholders(int *beholder, char *str, int len_str);
void	create_board(int *board, int board_size, int i, int i_board);
void	print_board(int *board, int board_size, int i, int i_board);

#define ERR "Error"

void	ft_create_game(int board_size, char *str, int len_str)
{
	int *beholder;
	int *board;
	int malloc_size;

	malloc_size = 5 * 5;
	beholder = (int*) malloc(malloc_size * sizeof(int));
	board = (int*) malloc(malloc_size * sizeof(int));

	create_beholders(beholder, str, len_str);
	create_board(board, board_size, 0, 0);

	int i;
	int total;

	total = board_size * board_size;
	i = 0;
	while (i < total)
	{
		if (beholder[i] == 1)
			board[i] = 4;
		/*if(beholder[i] == 1)
		{
			// 16 / 4 * 0
			if(board[i] < (total / board_size * i))
				board[i] = 4
		}
			if()
			board[i] = board_size;*/
		i++;
	}

	print_board(board, board_size, 0, 0);





	// colup
	// beholder[0]
	// beholder[1]
	// beholder[2]
	// beholder[3]
	// coldown
	// beholder[4]
	// beholder[5]
	// beholder[6]
	// beholder[7]
	// colright
	// beholder[8]
	// beholder[9]
	// beholder[10]
	// beholder[11]
	// colleft
	// beholder[12]
	// beholder[13]
	// beholder[14]
	// beholder[15]

	// i_beholder / board_size descobrir observadores colup/coldown/colright/colleft

	free (beholder);
	free (board);

	// int		i;
	// char	*game;

	// game = str;

	// if (board_size == 3)
	// 	game = "1 2 3 \n 2 3 4 \n  3 4 1 \n\0";
	// if (board_size == 4)
	// 	game = "1 2 3 4\n 2 3 1 4 \n 3 2 4 1 \n 3 2 4 1 \n\0";
	// if (board_size == 5)
	// 	game = "1 2 3 5 1 \n 2 5 2 3 4 \n 1 3 3 4 1 \n 1 3 3 4 1 \n 1 3 3 4 1 \n\0";
	// i = 0;
	// while (game[i] != '\0')
	// {
	// 	if (game[i] != ' ')
	// 		ft_putchar(1, 0, &game[i]);
	// 	i++;
	// }
}

void	create_beholders(int *beholder, char *str, int len_str)
{
	int i;
	int i_beholder;

	i = 0;
	i_beholder = 0;
	while(i < len_str)
	{
		if (str[i] != ' ')
		{
			beholder[i_beholder] = (int)(str[i] - 48);
			i_beholder++;
		}
		i++;
	}
}

void	create_board(int *board, int board_size, int i, int i_board)
{
	while(i < (board_size * board_size))
	{
		board[i_board] = 0;
		i_board++;
		i++;
	}
}

void	print_board(int *board, int board_size, int i, int i_board)
{
	int jump_line;

	jump_line = 1;
	while(i < (board_size * board_size))
	{
		printf("%d", board[i_board]);
		i_board++;
		i++;
		if(jump_line >= board_size)
		{
			jump_line = 0;
			printf("\n");
		}
		jump_line++;
	}
}
