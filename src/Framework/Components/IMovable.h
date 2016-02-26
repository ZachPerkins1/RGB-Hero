/*
 * IMovable.h
 *
 *  Created on: Mar 17, 2015
 *      Author: zach
 */

#ifndef FRAMEWORK_COMPONENTS_IMOVABLE_H_
#define FRAMEWORK_COMPONENTS_IMOVABLE_H_

#include "IComponent.h"

class IMovable : public IComponent {
public:
	IMovable(Sprite* base);
	virtual ~IMovable();
};

#endif /* FRAMEWORK_COMPONENTS_IMOVABLE_H_ */
