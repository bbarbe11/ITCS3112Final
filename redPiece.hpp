//
//  redPiece.hpp
//  Final Project
//

#ifndef redPiece_hpp
#define redPiece_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

/**

* Header for redPiece.

*

* @param none

* @return none

*/
class redPiece{
public:
    redPiece(int x, int y);
    void update();
    sf::Vector2i getPosition();
    void draw(sf::RenderWindow& window,  sf::Vector2f pos);
private:
    sf::CircleShape circle;
    sf::Vector2f position;
    sf::Vector2f velocity;
};

#endif /* redPiece_hpp */
