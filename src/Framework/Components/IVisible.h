/*
 * IVisible.h
 *
 *  Created on: Mar 17, 2015
 *      Author: zach
 */

#ifndef FRAMEWORK_COMPONENTS_IVISIBLE_H_
#define FRAMEWORK_COMPONENTS_IVISIBLE_H_

#include "IComponent.h"

namespace cframe {

class IVisible : public IComponent {
public:
	IVisible();
	virtual ~IVisible();
};

} /* namespace cframe */

#endif /* FRAMEWORK_COMPONENTS_IVISIBLE_H_ */
