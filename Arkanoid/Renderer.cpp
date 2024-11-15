#include "Renderer.h"

Renderer::Renderer(int width, int height, std::string windowTitle) {
	this->window.setSize(sf::Vector2u(width,height));
	this->window.setTitle(windowTitle);
}

Renderer::~Renderer() {}

void Renderer::clear() {
	this->window.clear();
}

void Renderer::display() {
	this->window.display();
}

template<typename T>
void Renderer::draw(T object) {
	this->window.draw(object);
}