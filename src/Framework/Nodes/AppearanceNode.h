/*
 * AppearanceNode.h
 *
 *  Created on: Mar 17, 2015
 *      Author: zach
 */

#ifndef FRAMEWORK_NODES_APPEARANCENODE_H_
#define FRAMEWORK_NODES_APPEARANCENODE_H_

#include "SFML/Graphics.hpp"
#include "Node.h"

namespace cframe {

/*
 * The appearance node stores more
 * advanced, yet still fairly primitive
 * information on things such as color
 * and scale
 */

class AppearanceNode : public Node {
public:
	AppearanceNode() {}
	virtual ~AppearanceNode() {}

	virtual void PushInfo(sf::Sprite* sprite) {
		if (sprite->getColor() != color) {
			sprite->setColor(*color);
		}

		sprite->scale(sf::Vector2f(scale, scale));
	}

	sf::Color* color;
	float scale = 1.0F;
};

} /* namespace cframe */

#endif /* FRAMEWORK_NODES_APPEARANCENODE_H_ */
