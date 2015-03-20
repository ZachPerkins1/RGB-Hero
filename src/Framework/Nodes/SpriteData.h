/*
 * SpriteData.h
 *
 *  Created on: Mar 19, 2015
 *      Author: zach
 */

#ifndef FRAMEWORK_NODES_SPRITEDATA_H_
#define FRAMEWORK_NODES_SPRITEDATA_H_

namespace cframe {

class SpriteData {
public:
	SpriteData();
	virtual ~SpriteData();

	void AddNode(Node* node);
	void RemoveNode(Node* node);
	void Update();

private:
	std::vector<Node> nodes;
	sf::Sprite sprite;
};

} /* namespace cframe */

#endif /* FRAMEWORK_NODES_SPRITEDATA_H_ */
