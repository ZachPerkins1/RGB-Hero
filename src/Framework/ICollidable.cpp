/*
 * ICollidable.cpp
 *
 *  Created on: Mar 14, 2015
 *      Author: zach
 */

#include "../Framework/ICollidable.h"

namespace cframe {

//Base class for subclasses Solid and Detectable

ICollidable::ICollidable() {

}

ICollidable::~ICollidable() {
	// TODO Auto-generated destructor stub
}

void ICollidable::SetDefaultCollisionOperation(std::function<void(cutil::Collision<Sprite>)> func) {

}

void ICollidable::SetPlayerCollisionOperation(std::function<void(cutil::Collision<Player>)> func) {

}

void ICollidable::DoDefaultFunction(cutil::Collision<Sprite>) {
	std::cout << "Warning! The default collision operation has not been set";
}

void ICollidable::DoDefaultPlayerFunction(cutil::Collision<Player>) {
	std::cout << "Warning! The default player collision operation has not been set";
}

} /* namespace cutil */
