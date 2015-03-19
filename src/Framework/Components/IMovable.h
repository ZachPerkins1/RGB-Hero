/*
 * IMovable.h
 *
 *  Created on: Mar 17, 2015
 *      Author: zach
 */

#ifndef FRAMEWORK_COMPONENTS_IMOVABLE_H_
#define FRAMEWORK_COMPONENTS_IMOVABLE_H_

#include "IComponent.h"

namespace cframe {

class IMovable : public IComponent{
public:
	IMovable();
	virtual ~IMovable();
};

} /* namespace cframe */

#endif /* FRAMEWORK_COMPONENTS_IMOVABLE_H_ */
