#pragma once
#include <SFML/Graphics.hpp>
#include "enums.h"
class SnakePart : public sf::Drawable{
    protected:
    sf::Color color;
    Direction direction;
    sf::Vector2f position;
    static constexpr float GRID_SIZE = 15.f;
    protected:
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const = 0;
    public:
    SnakePart(sf::Color color, Direction direction);

    // * setters
    void setDirection(Direction direction);
    virtual void setPosition(sf::Vector2f position);

    // * getters
    sf::Vector2f getPosition();
    Direction getDirection();
};