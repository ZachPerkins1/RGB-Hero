/*
 * Movable.h
 *
 *  Created on: Mar 17, 2015
 *      Author: zach
 */

#ifndef FRAMEWORK_COMPONENTS_MOVABLE_H_
#define FRAMEWORK_COMPONENTS_MOVABLE_H_

#include "IMovable.h"

namespace cframe {

class Movable : public IMovable {
public:
	Movable();
	virtual ~Movable();
};

} /* namespace cframe */

#endif /* FRAMEWORK_COMPONENTS_MOVABLE_H_ */
