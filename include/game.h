#ifndef GAME_H
#define GAME_H

typedef enum{
	COLOR_RED,
	COLOR_GREEN,
	COLOR_BLUE
}Color;

typedef enum{
	GAME_ACTIVE,
	GAME_WON,
	GAME_DRAWN,
	GAME_ABADONED
}GameStatus;

typedef enum{
	MOVE_OK,
	MOVE_WON,
	MOVE_DRAW,
	MOVE_ERR_BAD_POSITION,
	MOVE_ERR_NOT_YOUR_TURN,
	MOVE_ERR_OCCUPIED,
	MOVE_ERR_GAME_OVER,
	MOVE_ERR_INVALID_ARGS
}MoveResult;

typedef struct{
	int match_id;
	int player_x_id;
	int player_o_id;
	char board[9];
	char current_turn;
	GameStatus status;
	char winner;
}Game;


Game* game_create(int match_id, int player_x_id, int player_o_id);

void game_destroy(Game * game);

#endif
