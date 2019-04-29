//  redPiece.cpp
//  Final Project

#include "redPiece.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

/**

* Actions for red checker pieces. Takes x and y coordinates of piece.

*

* @param x

* @param y

* @return none

*/
redPiece::redPiece(int x, int y):position(x, y), velocity(0, 0), circle(40, 20){
    circle.setOrigin(40, 40);
}

/**

* Updates position of red piece.

*

* @param none

* @return none

*/
void redPiece::update(){
    position.x += velocity.x;
    position.y += velocity.y;
    
    circle.setPosition(position);
}

/**

* Returns position for red piece.

*

* @param none

* @return none

*/
sf::Vector2i redPiece::getPosition(){
    sf::Vector2i pos = sf::Vector2i(position);
    return pos;
}

/**

* Takes vector position to draw red piece.

*

* @param window

* @param position

* @return none

*/
void redPiece::draw(sf::RenderWindow &window, sf::Vector2f pos){
                position=pos;
                circle.setPosition(position);
                circle.setFillColor(sf::Color::Red);

                window.draw(circle);
}
