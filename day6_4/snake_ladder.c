#include <stdio.h>
#include "snake_ladder.h"

extern unsigned int snake[7][2];
extern unsigned int ladder[6][2];

/* Function for snake and ladder game */
unsigned int snake_ladder(unsigned int player_position){
    unsigned int dice = 0;
	
	/* Putting dice */
	dice = random_number();
	
	/* Check snakes ladders and dice */
	if(player_position + dice <= 100){
		for(unsigned int i = 0; i < 7; ++i){
			if(player_position + dice == snake[i][0]){
				player_position = snake[i][1];
				printf("Encountered snake at %u to %u\n",snake[i][0], snake[i][1]);
				return player_position;
			}
		}
		for(unsigned int i = 0; i < 6; ++i){
			if(player_position + dice == ladder[i][0]){
				player_position = ladder[i][1];
				printf("Encountered ladder at %u to %u\n",ladder[i][0], ladder[i][1]);
				return player_position;
			}
		}
		printf("\n");
		return player_position + dice;
	}
	else{
		printf("\n");
		return player_position;
	}
}
