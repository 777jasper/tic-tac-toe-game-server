#include"game.h"
#include<stdio.h>
int main(void){
	printf("Tic-Tac-Toe\n");
	
	Game *game = game_create(1,100,200);

	if(game == NULL){
		printf("Error in creating game\n");
		return 1;
	}


	// printing game board

	for(int i = 0; i<9; i+=3){
		//print initial game board
		printf("%c | %c | %c\n",game->board[i], game->board[i+1], game->board[i+2]);
		if(i<6)
			printf("-----------\n");
	}

	printf("Initial game status:%d\n", game->status);	//0-Game Active, 1-Game Won, 2-Game Drawn, 3-Game Abandoned
	game_destroy(game);
	return 0;
}
