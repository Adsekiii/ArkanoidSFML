#include "Ball.h"

Ball::Ball(int ballSpeed, sf::Vector2f ballPosition, sf::String ballTexture) {
	srand(time(NULL));
	this->objectSpeed = ballSpeed;
	this->objectVelocity = sf::Vector2f(0.f, 0.f);
	if (!this->objectTexture.loadFromFile(ballTexture)) std::cout << "There was a problem loading ball texture\n";
	this->objectSprite.setTexture(this->objectTexture);
	this->objectBounds = this->objectSprite.getGlobalBounds();
	this->objectSprite.setOrigin(sf::Vector2f(this->objectSprite.getPosition().x + this->objectBounds.width/2,
											  this->objectSprite.getPosition().y + this->objectBounds.height/2));
	this->objectSprite.setPosition(ballPosition);
	this->wasFired = false;

}

void Ball::fireBall() {
	this->wasFired = !this->wasFired;

	short randomX = rand() % 2 == 1 ? 1 : -1;
	this->objectVelocity.x = randomX;
	this->objectVelocity.y = -1;
}

void Ball::updateBall(float dt) {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && !this->wasFired) {
		this->fireBall();
	}
	this->moveBall();
	this->setObjectPosition(sf::Vector2f(this->getObjectPosition().x + (this->objectSpeed * this->objectVelocity.x * dt), this->getObjectPosition().y + (this->objectSpeed * this->objectVelocity.y * dt)));

}

void Ball::moveBall()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && !this->wasFired)
	{
		this->objectVelocity.x = 1.f;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && !this->wasFired)
	{
		this->objectVelocity.x = -1.f;
	}
	if (!sf::Keyboard::isKeyPressed(sf::Keyboard::A) && !sf::Keyboard::isKeyPressed(sf::Keyboard::D) && !this->wasFired) {
		this->objectVelocity.x = 0.f;
	}

}

void Ball::draw(sf::RenderTarget &target, sf::RenderStates states) {
	target.draw(this->objectSprite);
}