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

void piece::setVelocity(sf::Vector2f vec){
    velocity = vec;
}
