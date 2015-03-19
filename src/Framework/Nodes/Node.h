/*
 * INode.h
 *
 *  Created on: Mar 17, 2015
 *      Author: zach
 */

#ifndef FRAMEWORK_NODES_NODE_H_
#define FRAMEWORK_NODES_NODE_H_

namespace cframe {

/*
 * Nodes store primitive information about
 * an entity for use in components
 */

class Node {
public:
	Node() {}
	virtual ~Node() {}

	//Whether or not the node has been used in a component
	bool used = false;

	//Sets used to true or false when the node is set equal to something but is jank
	Node* operator=(const Node& rhs) {
		used = true;
		return this;
	} //TODO: Fix this

};

} /* namespace cframe */

#endif /* FRAMEWORK_NODES_NODE_H_ */
