/*
 * Entity.cpp
 *
 *  Created on: Mar 13, 2015
 *      Author: zach
 */
/*
#include "../Framework/Entity.h"

namespace cframe {

Entity::Entity() {
	// TODO Auto-generated constructor stub

}

Entity::~Entity() {
	// TODO Auto-generated destructor stub
}

void Entity::SetMovementRotation(float angle) {
	rotation = angle;
}

void Entity::IncrementMovementRotation(float inc) {
	float newAngle = inc + rotation;
	if (newAngle > 360) {
		rotation = newAngle - 360;
	} else if (newAngle < 0) {
		rotation = newAngle + 360;
	} else {
		rotation = newAngle;
	}
}

void Entity::SetRotation(float angle) {
	SetMovementRotation(angle);
	sprite->setRotation(angle);
}

void Entity::IncrementRotation(float inc) {
	IncrementMovementRotation(inc);
	sprite->rotate(inc);
}

float Entity::GetMovementRotation() {
	return rotation;
}

float Entity::GetRotation() {
	return sprite->getRotation();
}

void Entity::SetDX(float speed) {
	dx = speed;
}

void Entity::SetDY(float speed) {
	dy = speed;
}

float Entity::GetDX() {
	return dx;
}

float Entity::GetDY() {
	return dy;
}

void Entity::CalculateSpeedForward(float speed) {
	double radRotation = (rotation/180) * 3.14; //Rotation is rad!
	dx = cos(radRotation) * speed;
	dy = sin(radRotation) * speed;
}


} /* namespace cframe */
