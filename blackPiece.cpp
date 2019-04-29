//  blackPiece.cpp
//  Final Project

#include "blackPiece.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

/**

* Actions for black checker pieces. Takes x and y coordinates of piece.

*

* @param x

* @param y

* @return none

*/
blackPiece::blackPiece(int x, int y):position(x, y), velocity(0, 0), circle(40, 20){
    circle.setOrigin(40, 40);
}

/**

* Updates position of black piece.

*

* @param none

* @return none

*/
void blackPiece::update(){
    position.x += velocity.x;
    position.y += velocity.y;
    
    circle.setPosition(position);
}

/**

* Returns position for black piece.

*

* @param none

* @return none

*/
sf::Vector2i blackPiece::getPosition(){
    sf::Vector2i pos = sf::Vector2i(position);
    return pos;
}


/**

* Takes vector position to draw black piece.

*

* @param window

* @param position

* @return none

*/
void blackPiece::draw(sf::RenderWindow &window,  sf::Vector2f pos){
                position=pos;
                circle.setPosition(position);
                circle.setFillColor(sf::Color::Black);

                window.draw(circle);
}
