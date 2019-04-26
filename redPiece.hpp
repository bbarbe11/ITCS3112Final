//
//  redPiece.hpp
//  Final Project
//

#ifndef redPiece_hpp
#define redPiece_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "piece.hpp"

using namespace std;

class redPiece : public piece{
public:
    redPiece(int x, int y);
    void draw(sf::RenderWindow& window);

private:
    sf::CircleShape circle;
    sf::Vector2f position;
    sf::Vector2f velocity;
};

#endif /* redPiece_hpp */
