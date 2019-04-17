//
//  piece.cpp
//  Final Project
//
//  Created by admin on 4/14/19.
//  Copyright © 2019 admin. All rights reserved.
//

#include "piece.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

piece::piece(int x, int y):position(x, y), velocity(0, 0), circle(40, 20){
    circle.setOrigin(40, 40);
}

void piece::update(){
    position.x += velocity.x;
    position.y += velocity.y;
    
    circle.setPosition(position);
}

void piece::draw(sf::RenderWindow &window){
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

void piece::setVelocity(sf::Vector2f vec){
    velocity = vec;
}
