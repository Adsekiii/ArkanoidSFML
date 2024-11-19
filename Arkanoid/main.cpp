#include "main.h"

int main() {

	sf::VideoMode windowSize(800,600);
	sf::String title = "Arcanoid";
	sf::RenderWindow window(windowSize,title);
	srand(time(0));


	Paddle paddle(100, sf::Vector2f(400, 550), "./textures/Paddle.png");
	Ball ball(100, sf::Vector2f(400, 500), "./textures/Ball.png");
	std::vector<Brick*> bricks;
	placeBricks(8, 4, &bricks, "./textures/Brick");

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
		paddle.updatePaddle(dt.asSeconds());
		ball.updateBall(dt.asSeconds());
		//clearing the screen
		window.clear();
		//drawing items
		for (int i = 0; i < bricks.size(); i++) {
			window.draw(*(bricks.at(i)));
		}
		window.draw(paddle);
		window.draw(ball);
		//displaying items
		window.display();

	}
	
	return EXIT_SUCCESS;
}


void placeBricks(int columns, int rows, std::vector<Brick*> *bricks, sf::String brickTexture) {
	for (int i = 0; i < columns; i++) {
		for (int j = 0; j < rows; j++) {
			sf::String randomTexture = brickTexture + std::to_string(rand() % 4 + 1) + ".png";
			bricks->push_back(new Brick(sf::Vector2f((800 / columns) * i + 45.f, (600 / rows / 2) * j + 60.f), randomTexture));
		}
	}
}


