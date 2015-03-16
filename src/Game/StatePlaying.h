/*
 * StatePlaying.h
 *
 *  Created on: Mar 13, 2015
 *      Author: zach
 */

#ifndef GAME_STATEPLAYING_H_
#define GAME_STATEPLAYING_H_


#include "GameState.h"

namespace gamestate {

class StatePlaying : public GameState {
public:
	StatePlaying();
	virtual ~StatePlaying();

	virtual void OnLoad();
	virtual void OnUnload();
	virtual void OnPause();
	virtual void Update();
	virtual void Draw();
};
}

#endif /* GAME_STATEPLAYING_H_ */
