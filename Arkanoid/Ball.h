#pragma once
#include "Rigidbody.h"
#include <random>
#include <time.h>

class Ball : public Rigidbody {
public:
	Ball(int ballSpeed, sf::Vector2f ballPosition, sf::String ballTexture);
	void fireBall();
	void moveBall();
	void updateBall(float dt);

private:
	bool wasFired;
	virtual void draw(sf::RenderTarget&, sf::RenderStates);
};