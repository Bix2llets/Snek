#pragma once
#include <Snake/SnakePart.h>

class SnakeBody : public SnakePart {
   private:
    sf::RectangleShape body;

   public:
    SnakeBody(sf::Color color, Direction direction);
    void moveFront(SnakePart* frontPart);
    void draw(sf::RenderTarget& target, sf::RenderStates state) const override;

    void setPosition(sf::Vector2f position) override;
};