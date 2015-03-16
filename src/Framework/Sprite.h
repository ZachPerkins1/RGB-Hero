/*
 * Sprite.h
 *
 *  Created on: Mar 13, 2015
 *      Author: zach
 */

#ifndef FRAMEWORK_SPRITE_H_
#define FRAMEWORK_SPRITE_H_

#include <string>
#include <SFML/Graphics.hpp>
#include "ICollidable.h"
#include "IMovable.h"
#include "IVisible.h"

namespace cframe {

/* The sprite class is used to represent any object in the
 * game. All things that appear or exist in the playing state
 * have this class as a parent with the exception of particles.
 */

class Sprite {
public:
	Sprite(IVisible*, IMovable*, ICollidable*, IColorChangeable*); //Load a sprite from a file
	Sprite(std::string, sf::IntRect); //Load a sprite from a file AND specify an area of the file to load
	virtual ~Sprite();

	sf::FloatRect GetBoundingBox(); //Gets the box containing the sprite

	float GetX();
	float GetY();

	void SetX(float x);
	void SetY(float y);

	virtual void Update(); //Used to update all functions TODO: Add delta-time

	virtual Sprite* GetSprite(); //Gets the contained SFML sprite
	virtual void SetTexture(sf::Texture*); //Sets the texture of the sprite (if visible)

private:
	void Init(); //Internal method used as a helper for the constructors

protected:
	sf::Sprite *sprite;
	sf::Texture *texture;
	ICollidable* collidable;

};

} /* namespace cframe */

#endif /* FRAMEWORK_SPRITE_H_ */
