/*
 * IVisible.h
 *
 *  Created on: Mar 17, 2015
 *      Author: zach
 */

#ifndef FRAMEWORK_COMPONENTS_IVISIBLE_H_
#define FRAMEWORK_COMPONENTS_IVISIBLE_H_

#include "IComponent.h"

class IVisible : public IComponent {
public:
	IVisible(Sprite* base);
	virtual ~IVisible();
};

#endif /* FRAMEWORK_COMPONENTS_IVISIBLE_H_ */
