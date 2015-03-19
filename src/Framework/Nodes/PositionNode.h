/*
 * PositionNode.h
 *
 *  Created on: Mar 17, 2015
 *      Author: zach
 */

#ifndef FRAMEWORK_NODES_POSITIONNODE_H_
#define FRAMEWORK_NODES_POSITIONNODE_H_

#include "SFML/Graphics.hpp"
#include "Node.h"

namespace cframe {

/*
 * The position node stores the very simple position
 * information (i.e. X pos, Y Pos, rotation). It does
 * not have any specific methods, only variables.
 */

//TODO: Add some form of width or height in so the collision
//code can get the bounding box
class PositionNode : public Node {
public:
	PositionNode() {}
	virtual ~PositionNode() {}

	float x;
	float y;
	float rot;
};

} /* namespace cframe */

#endif /* FRAMEWORK_NODES_POSITIONNODE_H_ */
