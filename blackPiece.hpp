//  blackPiece.hpp
//  Final Project

#ifndef blackPiece_hpp
#define blackPiece_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <iostream>


using namespace std;

class blackPiece{
public:
    blackPiece(int x, int y);
    void update();
    sf::Vector2i getPosition();
    void draw(sf::RenderWindow& window,  sf::Vector2f pos);
private:
    sf::CircleShape circle;
    sf::Vector2f position;
    sf::Vector2f velocity;
};

#endif /* blackPiece_hpp */
