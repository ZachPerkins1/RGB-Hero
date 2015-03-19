/*
 * Entity.cpp
 *
 *  Created on: Mar 17, 2015
 *      Author: zach
 */

#include "Entity.h"

namespace cframe {

Entity::Entity(IVisible* rComponent, ICollidable* cComponent, IMovable* mComponent, float x, float y) {
	//Set up components
	renderComponent = rComponent;
	collisionComponent = cComponent;
	motionComponent = mComponent;

	//Instantiating nodes
	position = new PositionNode();
	appearance = new AppearanceNode();
	movement = new MovementNode();

	//Set defaults for position. TODO: Add constructor that includes rotation
	position->x = x;
	position->y = y;
	position->rot = 0.0f;

	//Initializes the components with nodes. Using this method, the components pick which nodes they need
	renderComponent->Init(appearance, movement, position);
	collisionComponent->Init(appearance, movement, position);
	motionComponent->Init(appearance, movement, position);
}

Entity::~Entity() {
	//Delete crap, nuff said
	delete renderComponent;
	delete collisionComponent;
	delete motionComponent;
	delete position;
	delete appearance;
	delete movement;
}

//Okay, I'm not commenting on 7 methods that are just getters and setters
void Entity::SetX(float x) {
	position->x = x;
}

void Entity::SetY(float y) {
	position->y = y;
}

float Entity::GetX() {
	return position->x;
}

IVisible* Entity::GetRenderComponent() {
	return renderComponent;
}

IMovable* Entity::GetMovementComponent() {
	return motionComponent;
}

ICollidable* Entity::GetCollisionComponent() {
	return collisionComponent;
}

float Entity::GetY() {
	return position->y;
}

} /* namespace cframe */
