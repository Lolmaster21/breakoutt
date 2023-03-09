#include "brick.cpp"
#include <SFML/Graphics.hpp>

void brick::draw(sf::RenderWindow& window) {
	rect.setSize(sf::Vector2f(100, 50));
	rect.setFillColor((sf::Color(0, 200, 0)));
	rect.setPosition(xpos, ypos);
	window.draw(rect);
}