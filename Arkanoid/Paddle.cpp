#include "Paddle.h"

Paddle::Paddle(int paddleSpeed, sf::Vector2f paddlePosition, sf::String paddleTexture) {
	
	this->objectSpeed = paddleSpeed;
	sf::Texture texture;
	if (!texture.loadFromFile(paddleTexture)) {
		std::cout << "There was a problem importing textures";
	}
	this->objectSprite.setTexture(texture);
	this->objectVelocity = sf::Vector2f(0.f, 0.f);
	this->objectBounds = this->objectSprite.getGlobalBounds();
	this->objectSprite.setOrigin(sf::Vector2f(this->getObjectPosition().x + this->objectBounds.width/2, this->getObjectPosition().y + this->objectBounds.height/2));
	this->objectSprite.setPosition(paddlePosition);
}

void Paddle::movePaddle()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		this->objectVelocity.x = 1;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		this->objectVelocity.x = -1;
	}
	if (!sf::Keyboard::isKeyPressed(sf::Keyboard::A) && !sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		this->objectVelocity.x = 0;
	}
	

}

void Paddle::updatePaddle(float dt) {
	this->setObjectPosition(sf::Vector2f(this->getObjectPosition().x + (this->objectSpeed * this->objectVelocity.x * dt), this->getObjectPosition().y));
}

void Paddle::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
	target.draw(this->objectSprite, states);
}