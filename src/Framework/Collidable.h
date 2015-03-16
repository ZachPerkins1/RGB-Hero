/*
 * Collidable.h
 *
 *  Created on: Mar 15, 2015
 *      Author: zach
 */

#ifndef FRAMEWORK_COLLIDABLE_H_
#define FRAMEWORK_COLLIDABLE_H_

namespace cframe {

class Collidable : public ICollidable {
public:
	enum CollisionType {COLLISION_TYPE_BOUNDING, COLLISION_TYPE_CIRCULAR}

	Collidable(CollisionType type, bool isSolid);
	virtual ~Collidable();

	bool IsSolid();
	CollisionType GetCollisionType();


private:
	bool solid;
};

} /* namespace cframe */

#endif /* FRAMEWORK_COLLIDABLE_H_ */
