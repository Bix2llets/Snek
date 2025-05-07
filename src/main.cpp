#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
sf::RenderWindow window;
int main() {
    window.create(sf::VideoMode({600, 600}), "Snek", sf::Style::Close | sf::Style::Titlebar);
    while (window.isOpen()) {
        while (std::optional<sf::Event> event = window.pollEvent()) {
            if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
                if (keyPressed->code == sf::Keyboard::Key::Escape)
                    window.close();
            if (event->is<sf::Event::Closed>()) window.close();
        }
        window.clear(sf::Color::Black);
        window.display();
    }
    std::cout << "Closing succ\n";
}