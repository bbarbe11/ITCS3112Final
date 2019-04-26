//  blackPiece.cpp
//  Final Project

#include "blackPiece.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

blackPiece::blackPiece(int x, int y): piece(x, y){

}

void blackPiece::draw(sf::RenderWindow &window){
    for (int i = 0; i < 8; i++) { //loops through all the rows
        for (int j = 0; j < 8; j++) { //loops through all the columns
           if ((j == 5 && i % 2 != 0)||(j == 7 && i % 2 !=0)||(j == 6 && i % 2 == 0)) {
                //Last 3 rows
                position.x = i * 90 + 45;
                position.y = j * 90 + 45;
                circle.setPosition(position);

                circle.setFillColor(sf::Color::Black);

                window.draw(circle);
           }
        }
    }
}
