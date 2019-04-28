//
//  redPiece.cpp
//  Final Project

#include "redPiece.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

redPiece::redPiece(int x, int y):position(x, y), velocity(0, 0), circle(40, 20){
    circle.setOrigin(40, 40);
}

void redPiece::update(){
    position.x += velocity.x;
    position.y += velocity.y;
    
    circle.setPosition(position);
}
sf::Vector2i redPiece::getPosition(){
    sf::Vector2i pos = sf::Vector2i(position);
    return pos;
}

void redPiece::draw(sf::RenderWindow &window, sf::Vector2f pos){
                position=pos;
                circle.setPosition(position);
                circle.setFillColor(sf::Color::Red);

                window.draw(circle);
}
