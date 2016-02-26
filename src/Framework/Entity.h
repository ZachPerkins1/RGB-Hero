/*
 * Entity.h
 *
 *  Created on: Feb 25, 2016
 *      Author: Zach
 */

#ifndef SRC_FRAMEWORK_ENTITY_H_
#define SRC_FRAMEWORK_ENTITY_H_

#include "Components/IComponent.h"

class Entity : public Sprite {
public:
	Entity();
	virtual ~Entity();

	void addComponent(IComponent* c);
};

#endif /* SRC_FRAMEWORK_ENTITY_H_ */
