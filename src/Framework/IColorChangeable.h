/*
 * IColorChangeable.h
 *
 *  Created on: Mar 15, 2015
 *      Author: zach
 */

#ifndef FRAMEWORK_ICOLORCHANGEABLE_H_
#define FRAMEWORK_ICOLORCHANGEABLE_H_

#include "SFML/Graphics.hpp"

namespace cframe {

class IColorChangeable {
public:
	IColorChangeable();
	virtual ~IColorChangeable();

	virtual void SetColor(sf::Color);
	virtual void MixColor(sf::Color);
	virtual void ColorSprite(sf::Sprite*);

};

} /* namespace cframe */

#endif /* FRAMEWORK_ICOLORCHANGEABLE_H_ */
