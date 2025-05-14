#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

class Coordinates{
public:
    int x;
    int y;
};

class Ship{
public:
    sf::Sprite sprite;
    Coordinates startPositie;

    Ship(sf::Texture& t) : sprite(t) {}
};

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "Sayel");
    window.setFramerateLimit(144);

    sf::Texture t;
    if(!t.loadFromFile("../../src/Blub/sprites/pirateship.png"))
    {
        std::cerr << "failed to load image" << std::endl;
        exit(1);
    }
    Ship ship1 = Ship(t);
    ship1.sprite.setPosition({900, 300});
    // ship1.sprite.setOrigin({});
    // sf::SoundBuffer s;
    // s.loadFromFile("../../src/Blub/music/splash.ogg");
    // // sf::Music music("../../src/Blub/music/keelhauled.ogg");
    // sf::Sound splash;
    // splash.setBuffer(s);

    while (window.isOpen()){
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
            {
                // A key is pressed: move our character
                ship1.sprite.move({-2.f, 0.f});

                ship1.sprite.setRotation(sf::degrees(90));
            }            

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
            {

                ship1.sprite.move({0.f, -2.f});
                ship1.sprite.setRotation(sf::degrees(180));
            }            
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
            {

                ship1.sprite.move({0.f, 2.f});
                ship1.sprite.setRotation(sf::degrees(0));
            }            
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
            {

                ship1.sprite.move({2.f, 0.f});
                ship1.sprite.setRotation(sf::degrees(270));
            }            
        }

        window.clear(sf::Color::Blue);
        window.draw(ship1.sprite);
        window.display();

    }
}