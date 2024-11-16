#include "main.h"

int main() {

	sf::VideoMode windowSize(800,600);
	sf::String title = "Arcanoid";
	sf::RenderWindow window(windowSize,title);

	Paddle paddle(100, sf::Vector2f(400, 550), "./textures/Paddle.png");

	sf::Clock clock;
	sf::Time dt;

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
		dt = clock.restart();
		paddle.movePaddle();
		paddle.updatePaddle(dt.asSeconds());
		//clearing the screen
		window.clear();
		//drawing items
		window.draw(paddle);
		//displaying items
		window.display();

	}
	
	return EXIT_SUCCESS;
}


