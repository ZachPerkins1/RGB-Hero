/*
 * IVisible.cpp
 *
 *  Created on: Mar 17, 2015
 *      Author: zach
 */

#include "IVisible.h"
#include "../Systems/RenderingSystem.h"

IVisible::IVisible(Sprite* base) : IComponent("Visible", base) {
	RenderingSystem::getInstance()->add(this);
}

IVisible::~IVisible() {
	// TODO Auto-generated destructor stub
}

