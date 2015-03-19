/*
 * IComponent.h
 *
 *  Created on: Mar 17, 2015
 *      Author: zach
 */

#ifndef FRAMEWORK_COMPONENTS_ICOMPONENT_H_
#define FRAMEWORK_COMPONENTS_ICOMPONENT_H_

#include "../Nodes/AppearanceNode.h"
#include "../Nodes/MovementNode.h"
#include "../Nodes/PositionNode.h"

namespace cframe {

class IComponent {
public:
	IComponent();
	virtual ~IComponent();

	virtual void Init(AppearanceNode*, MovementNode*, PositionNode*) {}
};

} /* namespace cframe */

#endif /* FRAMEWORK_COMPONENTS_ICOMPONENT_H_ */
