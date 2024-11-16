#include "Rigidbody.h"

void Rigidbody::draw(sf::RenderTarget& target, sf::RenderStates states) const 
{
	target.draw(this->objectSprite, states);
}
Rigidbody::Rigidbody() {}


void Rigidbody::setObjectPosition(sf::Vector2f newPosition)
{
	this->objectSprite.setPosition(newPosition);
}
sf::Vector2f Rigidbody::getObjectPosition() 
{
	return this->objectSprite.getPosition();
}
void Rigidbody::setObjectVelocity(sf::Vector2f newVelocity)
{
	this->objectVelocity = newVelocity;
}
sf::Vector2f Rigidbody::getObjectVelocity()
{
	return this->objectVelocity;
}