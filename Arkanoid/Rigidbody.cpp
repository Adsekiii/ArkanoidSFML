#include "Rigidbody.h"

void Rigidbody::draw(sf::RenderTarget& target, sf::RenderStates states) const 
{
	target.draw(this->objectSprite);
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
/*
* 
* [THIS PIECE OF CODE ISN'T WORKING]
* PROBOBLY NEEDS A REWRITE AND ANOTHER LOOK AT HOW COLLISIONS SHOULD LOOK LIKE
* 
void Rigidbody::enteredArea(Rigidbody objectCollided)
{
	objectCollided.objectBounds = objectCollided.objectSprite.getGlobalBounds();
	this->objectBounds = this->objectSprite.getGlobalBounds();

	if (
		(
		 (this->objectSprite.getOrigin().y - this->objectBounds.height / 2) < (objectCollided.objectSprite.getOrigin().y + objectCollided.objectBounds.height / 2)
		 ||
		 (this->objectSprite.getOrigin().y + this->objectBounds.height / 2) > (objectCollided.objectSprite.getOrigin().y - objectCollided.objectBounds.height / 2)
		)
		&&
		(
		 (this->objectSprite.getOrigin().x - this->objectBounds.width / 2) < (objectCollided.objectSprite.getOrigin().x + objectCollided.objectBounds.width / 2)
		 ||
		 (this->objectSprite.getOrigin().x + this->objectBounds.width / 2) > (objectCollided.objectSprite.getOrigin().x - objectCollided.objectBounds.width / 2)
		)
	   )
	{
		objectCollided.setObjectVelocity(sf::Vector2f(this->getObjectVelocity().x, this->getObjectVelocity().y * -1));
	}
}

void Rigidbody::enteredArea(Staticbody objectCollided)
{
	objectCollided.setBounds(objectCollided.getSprite().getGlobalBounds());
	this->objectBounds = this->objectSprite.getGlobalBounds();

	if (
		(
			(this->objectSprite.getOrigin().y - this->objectBounds.height / 2) < (objectCollided.getSprite().getOrigin().y + objectCollided.getBounds().height / 2)
			||
			(this->objectSprite.getOrigin().y + this->objectBounds.height / 2) > (objectCollided.getSprite().getOrigin().y - objectCollided.getBounds().height / 2)
			)
		&&
		(
			(this->objectSprite.getOrigin().x - this->objectBounds.width / 2) < (objectCollided.getSprite().getOrigin().x + objectCollided.getBounds().width / 2)
			||
			(this->objectSprite.getOrigin().x + this->objectBounds.width / 2) > (objectCollided.getSprite().getOrigin().x - objectCollided.getBounds().width / 2)
			)
		)
	{
		this->setObjectVelocity(sf::Vector2f(this->getObjectVelocity().x, this->getObjectVelocity().y * -1));
	}
}

*/