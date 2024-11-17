#pragma once
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"
#include <iostream>
#include "Staticbody.h"
#include <time.h>
#include <random>

class Brick : public Staticbody {
public:
	Brick(sf::Vector2f brickPosition, sf::String brickTexture);
	~Brick();
private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};
