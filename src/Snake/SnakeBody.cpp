#include "Snake/SnakeBody.h"
#include <iostream>
SnakeBody::SnakeBody(sf::Color color, Direction direction)
    : SnakePart(color, direction) {
    body.setPosition(position);
    body.setOrigin({0.f, 0.f});
    body.setFillColor(color);
    body.setSize({GRID_SIZE, GRID_SIZE});
}

void SnakeBody::moveFront(SnakePart* frontPart) {
    setPosition(frontPart->getPosition());
    setDirection(frontPart->getDirection());
}

void SnakeBody::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(body);
}

void SnakeBody::setPosition(sf::Vector2f position) {
    this->position = position * GRID_SIZE;
    body.setPosition(this->position);
    std::cerr << "The new position is: " << body.getPosition().x << " " << body.getPosition().y << "\n";
}