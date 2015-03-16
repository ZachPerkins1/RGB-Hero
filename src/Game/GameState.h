/*
 * GameState.h
 *
 *  Created on: Mar 13, 2015
 *      Author: zach
 */

#ifndef GAME_GAMESTATE_H_
#define GAME_GAMESTATE_H_

namespace gamestate {

class GameState {
public:
	GameState();
	virtual ~GameState();

	virtual void OnLoad();
	virtual void OnUnload();
	virtual void OnPause();
	virtual void Update();
	virtual void Draw();
};
}

#endif /* GAME_GAMESTATE_H_ */
