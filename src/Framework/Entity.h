/*
 * Entity.h
 *
 *  Created on: Mar 13, 2015
 *      Author: zach
 */

/*
#ifndef FRAMEWORK_ENTITY_H_
#define FRAMEWORK_ENTITY_H_

#include <cmath>

namespace cframe {

class Entity : public Sprite {
public:
	Entity();
	virtual ~Entity();

	void SetMovementRotation(float angle);
	void SetRotation(float angle);
	void IncrementRotation(float inc);
	void IncrementMovementRotation(float inc);

	float GetRotation();
	float GetMovementRotation();

	void SetDX(float speed);
	void SetDY(float speed);

	float GetDX();
	float GetDY();

	void CalculateSpeedForward(float speed);

	virtual void Update();

private:
	float rotation;

	float dx;
	float dy;
};

} /* namespace cframe */

/*
#endif /* FRAMEWORK_ENTITY_H_ */
