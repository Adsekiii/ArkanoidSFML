#pragma once
#include "Rigidbody.h"

class Paddle : public Rigidbody{
public:
	Paddle(int paddleSpeed, sf::Vector2f paddlePosition, sf::String paddleTexture);
private:
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};