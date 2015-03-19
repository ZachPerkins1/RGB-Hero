/*
 * Collidable.h
 *
 *  Created on: Mar 17, 2015
 *      Author: zach
 */

#ifndef FRAMEWORK_COMPONENTS_COLLIDABLE_H_
#define FRAMEWORK_COMPONENTS_COLLIDABLE_H_

#include "ICollidable.h"

namespace cframe {

class Collidable : public ICollidable {
public:
	Collidable();
	virtual ~Collidable();
};

} /* namespace cframe */

#endif /* FRAMEWORK_COMPONENTS_COLLIDABLE_H_ */
