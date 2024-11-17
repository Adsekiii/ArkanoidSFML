#include "Brick.h"

Brick::Brick(sf::Vector2f brickPosition, sf::String brickTexture) {
	if (!this->objectTexture.loadFromFile(brickTexture)) {
		std::cout << "There was a problem importing textures";
	}
	this->objectSprite.setTexture(this->objectTexture);
	this->objectBounds = this->objectSprite.getGlobalBounds();
	this->objectSprite.setOrigin(sf::Vector2f(this->objectSprite.getPosition().x + this->objectBounds.width/2, this->objectSprite.getPosition().y + this->objectBounds.height / 2));
	this->setObjectPosition(brickPosition);
}
Brick::~Brick() {}

void Brick::draw(sf::RenderTarget &target, sf::RenderStates states) const {
	target.draw(this->objectSprite);
}
