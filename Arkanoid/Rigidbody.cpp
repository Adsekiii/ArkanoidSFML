#include "Rigidbody.h"

void Rigidbody::draw(sf::RenderTarget& target, sf::RenderStates& states) const 
{
	target.draw(this->objectSprite, states);
}
Rigidbody::Rigidbody() {
	this->objectVelocity = sf::Vector2f(0.f, 0.f);
	this->objectPosition = sf::Vector2f(0.f, 0.f);
	this->objectBounds = this->objectSprite.getGlobalBounds();
	this->objectSprite.setColor(sf::Color::White);
}


void Rigidbody::setPosition(sf::Vector2f newPosition) 
{
	this->objectPosition = newPosition;
}
sf::Vector2f Rigidbody::getPosition() 
{
	return this->objectPosition;
}
void Rigidbody::setVelocity(sf::Vector2f newVelocity) 
{
	this->objectVelocity = newVelocity;
}
sf::Vector2f Rigidbody::getVelocity() 
{
	return this->objectVelocity;
}