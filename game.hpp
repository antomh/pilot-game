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

    void processEvents();
    void update();
    void render();
};

#endif // CGAME_H