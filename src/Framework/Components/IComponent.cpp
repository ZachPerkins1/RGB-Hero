/*
 * IComponent.cpp
 *
 *  Created on: Mar 17, 2015
 *      Author: zach
 */

#include "IComponent.h"

IComponent::IComponent(std::string name, Sprite* base) {
	this->name = name;
	this->base = base;
}

IComponent::~IComponent() {}

std::string IComponent::getName() {
	return name;
}

