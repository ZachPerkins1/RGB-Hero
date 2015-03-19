/*
 * Entity.h
 *
 *  Created on: Mar 17, 2015
 *      Author: zach
 */

#ifndef FRAMEWORK_NODES_ENTITY_H_
#define FRAMEWORK_NODES_ENTITY_H_

#include <vector> //Useless include but imma still keep it here kuz swag

#include "Nodes/AppearanceNode.h"
#include "Nodes/MovementNode.h"
#include "Nodes/PositionNode.h"

#include "Components/ICollidable.h"
#include "Components/IVisible.h"
#include "Components/IMovable.h"

namespace cframe {

/*
 * The entity class represents anything that is not bound
 * to the grid and has more than just a few properties.
 * Tiles (excluding TileEntities) are not childs of the
 * Entity class. Particles are also not, as they have very
 * few properties, and need to be as lightweight as possible.
 */

class Entity {
public:
	//Instantiating the class requires instances of the certain properties as well
	//as a starting x and y
	Entity(IVisible*, ICollidable*, IMovable*, float x, float y);
	virtual ~Entity();

	//Simple getter methods to get components
	IVisible* GetRenderComponent();
	IMovable* GetMovementComponent();
	ICollidable* GetCollisionComponent();

	//Shortcuts to setting things through Position nodes
	void SetX(float x);
	void SetY(float y);

	float GetX();
	float GetY();

private:
	//Components
	ICollidable* collisionComponent;
	IVisible* renderComponent;
	IMovable* motionComponent;

	void InitComponents();

protected:
	//Nodes store all of the data of the entity (i.e. Color, Position, etc.)
	AppearanceNode* appearance;
	MovementNode* movement;
	PositionNode* position;
};

} /* namespace cframe */

#endif /* FRAMEWORK_NODES_ENTITY_H_ */
