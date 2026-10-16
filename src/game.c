#include<stdlib.h>
#include"game.h"

// Game creation with default parameters
Game *game_create(int match_id, int player_x_id, int player_o_id){
	Game *game = malloc(sizeof(Game));
	if(game == NULL){
		return NULL;
	}
	// Initial game parameters

	game->match_id = match_id;
	game->player_x_id = player_x_id;
	game->player_o_id = player_o_id;
	game->current_turn = 'X';
	game->status = GAME_ACTIVE;
	game->winner = '.';
        for(int i = 0; i<9; i++){
                game->board[i] = '.';
        }
	return game;
}

// deallocating the assigned space through malloc() using free()
void game_destroy(Game *game){
	free(game);
}


