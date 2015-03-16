/*
 * Game.h
 *
 *  Created on: Mar 13, 2015
 *      Author: zach
 */
#include <SFML/Graphics.hpp>
#include <string>
#include <sstream>

#ifndef GAME_GAME_H_
#define GAME_GAME_H_

class Game {
public:
	Game();
	virtual ~Game();

	void Draw();
	void Update();

private:
	sf::Window *window;
	const double VERSION = 0.1;
	void Loop();
};

#endif /* GAME_GAME_H_ */
