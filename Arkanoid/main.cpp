#include "main.h"

int main() {

	sf::VideoMode windowSize(800,600);
	sf::String title = "Arcanoid";
	sf::RenderWindow window(windowSize,title);

	Paddle paddle(100, sf::Vector2f(100, 100), "./textures/Paddle.png");

	while (window.isOpen())
	{
		sf::Event event;

		if (window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
		//clearing the screen
		window.clear();
		//drawing items

		//displaying items
		window.display();

	}
	
	return EXIT_SUCCESS;
}


