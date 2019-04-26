//  blackPiece.hpp
//  Final Project

#ifndef blackPiece_hpp
#define blackPiece_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "piece.hpp"

using namespace std;

class blackPiece : public piece{
public:
    blackPiece(int x, int y);
    void draw(sf::RenderWindow& window);

private:
    sf::CircleShape circle;
    sf::Vector2f position;
    sf::Vector2f velocity;
};

#endif /* blackPiece_hpp */
