/*
 * Sprite.cpp
 *
 *  Created on: Mar 13, 2015
 *      Author: zach
 */

#include "../Framework/Sprite.h"

namespace cframe {


Sprite::Sprite(std::string filepath, sf::IntRect area) {
	texture = new sf::Texture();
	texture->loadFromFile(filepath, area);
	Init();
}

Sprite::Sprite(std::string filepath) {
	texture = new sf::Texture();
	texture->loadFromFile(filepath);
	Init();
}

Sprite::~Sprite() {
	// TODO Auto-generated destructor stub
}

void Sprite::Init() {
	texture->setSmooth(true); //Will always use smooth rendering
	sprite = new sf::Sprite();
	sprite->setTexture(*texture);
}

sf::FloatRect Sprite::GetBoundingBox() {
	return sprite->getGlobalBounds();
}

float Sprite::GetX() {
	return sprite->getPosition().x;
}

float Sprite::GetY() {
	return sprite->getPosition().y;
}


} /* namespace cframe */
