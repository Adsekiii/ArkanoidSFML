#pragma once
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include <iostream>


class Rigidbody: public sf::Drawable, public sf::Transformable{
public:
	Rigidbody();

	void setPosition(sf::Vector2f);
	sf::Vector2f getPosition();
	void setVelocity(sf::Vector2f);
	sf::Vector2f getVelocity();
protected:
	int objectSpeed;

	sf::Vector2f objectVelocity;
	sf::Vector2f objectPosition;
	sf::Rect<float> objectBounds;
	sf::Sprite objectSprite;
	virtual void draw(sf::RenderTarget &target, sf::RenderStates &states) const;
};