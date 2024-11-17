#pragma once
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include <iostream>
#include "Paddle.h"
#include "Brick.h"
#include <vector>
#include <time.h>
#include <random>


int main();

void placeBricks(int columns, int rows, std::vector<Brick*> *bricks, sf::String brickTexture);