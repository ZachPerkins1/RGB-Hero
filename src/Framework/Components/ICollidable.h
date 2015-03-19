/*
 * ICollidable.h
 *
 *  Created on: Mar 17, 2015
 *      Author: zach
 */

#ifndef FRAMEWORK_COMPONENTS_ICOLLIDABLE_H_
#define FRAMEWORK_COMPONENTS_ICOLLIDABLE_H_

#include "IComponent.h"

namespace cframe {

class ICollidable : public IComponent {
public:
	ICollidable();
	virtual ~ICollidable();

};

} /* namespace cframe */

#endif /* FRAMEWORK_COMPONENTS_ICOLLIDABLE_H_ */
