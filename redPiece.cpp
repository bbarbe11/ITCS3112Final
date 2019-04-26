//
//  redPiece.cpp
//  Final Project

#include "redPiece.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

redPiece::redPiece(int x, int y) : piece(x, y) {

}

void redPiece::draw(sf::RenderWindow &window){
    for (int i = 0; i < 8; i++) { //loops through all the rows
        for (int j = 0; j < 8; j++) { //loops through all the columns
            if ((j == 0 && i % 2 == 0)||(j == 2 && i % 2 == 0)||(j == 1 && i % 2 != 0)) {
                //First 3 rows
                position.x = i * 90 + 45;
                position.y = j * 90 + 45;
                circle.setPosition(position);

                circle.setFillColor(sf::Color::Red);

                window.draw(circle);
            }
        }
    }
}
