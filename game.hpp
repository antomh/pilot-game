#ifndef CGAME_H
#define CGAME_H

#include <SFML/Graphics.hpp>

class CGame
{
public:

    CGame();
    ~CGame() {};
    void run();

private:
    
    sf::RenderWindow mWindow;
    sf::CircleShape  mPlayer;
    const sf::Time TimePerFrame = sf::seconds(1.f / 60.f);

    void processEvents();
    void update(sf::Time deltaTime);
    void render();

    void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);
};

#endif // CGAME_H