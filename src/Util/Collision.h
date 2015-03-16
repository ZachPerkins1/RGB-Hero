/*
 * Collision.h
 *
 *  Created on: Mar 14, 2015
 *      Author: zach
 */

#ifndef UTIL_COLLISION_H_
#define UTIL_COLLISION_H_

namespace cutil {

/*
 * The Collision class is a container for
 * Sprite objects that are collided with
 * when collision detection is run.
 */

template <class T> //Template to store custom types
class Collision {
public:
	enum Axis {X, Y}; //The axis of collision

	//Have to use inline functions b/c of template
	Collision(T obj, Axis ax) {
		object = obj;
		axis = ax;
	}

	virtual ~Collision() {
		delete object;
	}

	T* GetObject() {
		return object;
	}

	Axis GetCollisionAxis() {
		return axis;
	}

private:
	T* object;
	Axis axis;
};

} /* namespace cutil */

#endif /* UTIL_COLLISION_H_ */
