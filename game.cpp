#include "game.hpp"

CGame::CGame()
    : mWindow(sf::VideoMode(640, 480), "SFML Application"), mPlayer()
{
    mPlayer.setRadius(40.f);
    mPlayer.setPosition(100.f, 100.f);
    mPlayer.setFillColor(sf::Color::Cyan);
}

void CGame::run()
{
    sf::Clock clock;
    sf::Time timeSinceLastUpdate = sf::Time::Zero;
    while (mWindow.isOpen())
    {
        processEvents();
        timeSinceLastUpdate += clock.restart();
        while (timeSinceLastUpdate > TimePerFrame)
        {
            timeSinceLastUpdate -= TimePerFrame;
            processEvents();
            update(TimePerFrame);
        }
        render();
    }
}

void CGame::processEvents()
{
    sf::Event event;
    while (mWindow.pollEvent(event))
    {
        switch (event.type)
        {
        case sf::Event::KeyPressed:
            handlePlayerInput(event.key.code, true);
            break;
        case sf::Event::KeyReleased:
            handlePlayerInput(event.key.code, false);
            break;
        case sf::Event::Closed:
            mWindow.close();
            break;
        }
    }
}

void CGame::update(sf::Time deltaTime)
{
    // sf::Vector2f movement(0.f, 0.f);
    // if (mIsMovingUp)
    //     movement.y -= PlayerSpeed;
    // if (mIsMovingDown)
    //     movement.y += PlayerSpeed;
    // if (mIsMovingLeft)
    //     movement.x -= PlayerSpeed;
    // if (mIsMovingRight)
    //     movement.x += PlayerSpeed;
    // mPlayer.move(movement * deltaTime.asSeconds());
}

void CGame::render()
{
    sf::Texture texture;
    if (!texture.loadFromFile("/home/shap/Projects/cpp-projects/pilot-game/adventurer-idle-00.png"))
    {
        // Handle loading error
    }
    sf::Sprite sprite(texture);
    sprite.setPosition(100.f, 100.f);
    mWindow.clear();
    mWindow.draw(sprite);
    mWindow.display();
}

void CGame::handlePlayerInput(sf::Keyboard::Key key, bool isPressed)
{
    // if (key == sf::Keyboard::W)
    //     mIsMovingUp = isPressed;
    // else if (key == sf::Keyboard::S)
    //     mIsMovingDown = isPressed;
    // else if (key == sf::Keyboard::A)
    //     mIsMovingLeft = isPressed;
    // else if (key == sf::Keyboard::D)
    //     mIsMovingRight = isPressed;
}