/*
 * Tile.h
 *
 *  Created on: Mar 15, 2015
 *      Author: zach
 */

#ifndef LEVEL_TILE_H_
#define LEVEL_TILE_H_

namespace cframe {

class Tile {
public:
	Tile();
	virtual ~Tile();
private:
	int tilex;
	int tiley;
};

} /* namespace cframe */

#endif /* LEVEL_TILE_H_ */
