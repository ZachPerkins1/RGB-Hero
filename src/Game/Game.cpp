/*
 * Game.cpp
 *
 *  Created on: Mar 13, 2015
 *      Author: zach
 */

#include "Game.h"

Game::Game() {
	std::ostringstream stream;
	stream << "Colored" << VERSION;
	window = new sf::Window(sf::VideoMode(1920, 1080), stream.str());
}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

void Game::Update() {

}

void Game::Draw() {

}

void Game::Loop() {

}

