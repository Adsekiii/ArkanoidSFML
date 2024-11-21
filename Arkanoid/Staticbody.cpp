#include "Staticbody.h"

Staticbody::Staticbody() {};
Staticbody::~Staticbody() {};

void Staticbody::setObjectPosition(sf::Vector2f newPosition)
{
	this->objectSprite.setPosition(newPosition);
}
sf::Vector2f Staticbody::getObjectPosition()
{
	return this->objectSprite.getPosition();
}


void Staticbody::draw(sf::RenderTarget& target, sf::RenderStates states) const{
	target.draw(this->objectSprite);
}


sf::Sprite Staticbody::getSprite() {
	return this->objectSprite;
}



sf::Rect<float> Staticbody::getBounds() {
	return this->objectBounds;
}

void Staticbody::setBounds(sf::Rect<float> bounds) {
	this->objectBounds = bounds;
}
