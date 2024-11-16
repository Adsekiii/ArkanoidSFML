#pragma once
#include "Rigidbody.h"

class Paddle : public Rigidbody{
public:
	Paddle(int paddleSpeed, sf::Vector2f paddlePosition, sf::String paddleTexture);
	void movePaddle();
	void updatePaddle(float dt);
private:
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};