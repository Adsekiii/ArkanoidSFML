#pragma once
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"
#include <iostream>

class Staticbody: public sf::Drawable, public sf::Transformable{
public:
	Staticbody();
	~Staticbody();
	void setObjectPosition(sf::Vector2f);
	sf::Sprite getSprite();
	sf::Rect<float> getBounds();
	void setBounds(sf::Rect<float>);
	sf::Vector2f getObjectPosition();
protected:
	sf::Rect<float> objectBounds;
	sf::Texture objectTexture;
	sf::Sprite objectSprite;
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};
