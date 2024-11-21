#pragma once
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include "Staticbody.h"
#include <iostream>


class Rigidbody: public sf::Drawable, public sf::Transformable{
public:
	Rigidbody();
	void setObjectPosition(sf::Vector2f);
	sf::Vector2f getObjectPosition();
	void setObjectVelocity(sf::Vector2f);
	sf::Vector2f getObjectVelocity();
	//void enteredArea(Rigidbody);
	//void enteredArea(Staticbody);
protected:
	float objectSpeed;
	sf::Texture objectTexture;
	sf::Vector2f objectVelocity;
	sf::Rect<float> objectBounds;
	sf::Sprite objectSprite;
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};