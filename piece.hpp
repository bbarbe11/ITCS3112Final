//
//  piece.hpp
//  Final Project
//
//  Created by admin on 4/14/19.
//  Copyright © 2019 admin. All rights reserved.
//

#ifndef piece_hpp
#define piece_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

class piece{
public:
    piece(int x, int y);
    void update();
    void setVelocity(sf::Vector2f vec);

private:
    sf::CircleShape circle;
    sf::Vector2f position;
    sf::Vector2f velocity;
};

#endif /* piece_hpp */
