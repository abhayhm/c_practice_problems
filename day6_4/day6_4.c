/* Name: Abhay HM
 * Date: 27/09/2021
 * Info: Program to create snake and ladder for two players.
 */

#include <stdio.h>
#include <stdlib.h>
#include "snake_ladder.h"

/* Board details */
unsigned int board[10][10] = {{100,99, 98, 97, 96, 95, 94, 93, 92, 91},
{81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
{80, 79, 78, 77, 76, 75, 74, 73, 72, 71},
{61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
{60, 59, 58, 57, 56, 55, 54, 53, 52, 51},
{41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
{40, 39, 38, 37, 36, 35, 34, 33, 32, 31},
{21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
{20, 19, 18, 17, 16, 15, 14, 13, 12, 11},
{ 1,  2,  3,  4,  5,  6,  7,  8,  9, 10}};

/* Snake details */
 unsigned int snake[7][2] = {{32, 10},
{34,  6},
{48, 26},
{63, 18},
{88, 24},
{95, 56},
{97, 78}};

/* Ladder details */
unsigned int ladder[6][2] = {{ 8, 30},
{21, 42},
{28, 76},
{50, 68},
{71, 92},
{88, 99}};

int main(){
	/* Player details */
	unsigned int player = 0;
	unsigned int computer = 0;
	unsigned int player_backup = 0;
	unsigned int computer_backup = 0;
	unsigned int flag = 0;
	
	/* Game begining */
	while(player != 100 && computer != 100){
		system("clear");
		printf("[P: Player] [C: Computer]\n");
		
		/* Turns for each player */
		if(0 == flag){
			computer_backup = computer;
			computer = snake_ladder(computer);
			flag = 1;
			printf("Computer moved from %u to %u\n",computer_backup, computer);
		}
		else{
			player_backup = player;
			player = snake_ladder(player);
			flag = 0;
			printf("Player moved from %u to %u\n",player_backup, player);
		}
		
		/* Print board on each move */
		print_board(player, computer);
		
		if(1 == flag){
			printf("Press enter to move player:");
		}
		else{
			printf("Press enter to move computer:");
		}
		while('\n' != getchar());
	}
	
	/* Announce winner */
	if(100 == player){
		printf("\nPlayer wins the game\n");
	}
	else{
		printf("\nComputer wins the game\n");
	}
	
    /* Exit */
    return 0;
}

