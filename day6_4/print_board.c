#include <stdio.h>
#include "snake_ladder.h"

extern unsigned int board[10][10];

/* Function to print the board */
void print_board(unsigned int player, unsigned int computer){
    for(unsigned int i = 0; i < 10; ++i){
		for(unsigned int j = 0; j < 10; ++j){
			if(board[i][j] == player){
				printf(" P ");
			}
			else if(board[i][j] == computer){
				printf(" C ");
			}
			else{
				printf("%3u", board[i][j]);
			}
			printf(" ");
		}
		printf("\n");
	}
	
	/* Info for user */
	printf("Player position:   %u\n",player);
	printf("Computer position: %u\n",computer);
}
