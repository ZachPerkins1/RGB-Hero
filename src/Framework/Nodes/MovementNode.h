/*
 * MovementNode.h
 *
 *  Created on: Mar 17, 2015
 *      Author: zach
 */

#ifndef FRAMEWORK_NODES_MOVEMENTNODE_H_
#define FRAMEWORK_NODES_MOVEMENTNODE_H_

#include "SFML/Graphics.hpp"
#include "Node.h"

namespace cframe {

/*
 * The movement node stores the very simple all
 * of the information that position does, just in
 * terms of speed.
 */

class MovementNode : public Node {
public:
	MovementNode() {}
	virtual ~MovementNode() {}

	//'D' as in delta, future Zach, you idiot
	float dx = 0.0f;
	float dy = 0.0f;
	float drot = 0.0f;
	//And yes, rot as in rotation
};

} /* namespace cframe */

#endif /* FRAMEWORK_NODES_MOVEMENTNODE_H_ */
