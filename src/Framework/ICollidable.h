/*
 * ICollidable.h
 *
 *  Created on: Mar 14, 2015
 *      Author: zach
 */

#ifndef FRAMEWORK_ICOLLIDABLE_H_
#define FRAMEWORK_ICOLLIDABLE_H_

class Sprite;

#include "Sprite.h"
#include "../Util/Collision.h"
#include "Player.h"
#include <iostream>
#include <functional>

namespace cframe {

class ICollidable {
public:
	ICollidable();
	virtual ~ICollidable();

	virtual bool TestForCollision(Sprite* sprite);

	void SetDefaultCollisionOperation(std::function<void(cutil::Collision<Sprite>)> func );
	void SetPlayerCollisionOperation(std::function<void(cutil::Collision<Player>)> func );

private:
	void DoDefaultFunction(cutil::Collision<Sprite>);
	void DoDefaultPlayerFunction(cutil::Collision<Player>);

	std::function<void(cutil::Collision<Sprite>)> defaultFunction = std::bind( &ICollidable::DoDefaultFunction, this, std::placeholders::_1 );
	std::function<void(cutil::Collision<Player>)> playerFuncion = std::bind( &ICollidable::DoDefaultPlayerFunction, this, std::placeholders::_1 );

};

} /* namespace cutil */

#endif /* FRAMEWORK_ICOLLIDABLE_H_ */
