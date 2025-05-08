#include "Snake/SnakePart.h"

SnakePart::SnakePart(sf::Color color, Direction direction) : color{color}, direction{direction} {
    position = {0.f, 0.f};
}

void SnakePart::setDirection(Direction newDirection) {
    direction = newDirection;
}

sf::Vector2f SnakePart::getPosition() {
    return position / GRID_SIZE;
}

void SnakePart::setPosition(sf::Vector2f position) {
    this->position = position * GRID_SIZE;
}

Direction SnakePart::getDirection() {
    return direction;
}
