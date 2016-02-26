/*
 * IComponent.h
 *
 *  Created on: Mar 17, 2015
 *      Author: zach
 */

#ifndef FRAMEWORK_COMPONENTS_ICOMPONENT_H_
#define FRAMEWORK_COMPONENTS_ICOMPONENT_H_

#include <string>
#include "../Sprite.h"

class IComponent {
public:
	IComponent(std::string name, Sprite* base);
	virtual ~IComponent();

	std::string getName();

private:
	std::string name;

protected:
	Sprite* base;

};

#endif /* FRAMEWORK_COMPONENTS_ICOMPONENT_H_ */
