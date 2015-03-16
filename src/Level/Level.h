/*
 * Level.h
 *
 *  Created on: Mar 15, 2015
 *      Author: zach
 */

#ifndef LEVEL_LEVEL_H_
#define LEVEL_LEVEL_H_

namespace cframe {

class Level {
public:
	Level(sf::Uint8 level[]);
	virtual ~Level();
};

} /* namespace cframe */

#endif /* LEVEL_LEVEL_H_ */
