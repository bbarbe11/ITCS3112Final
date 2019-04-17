#include <SFML/Graphics.hpp>
#include <iostream>
#include "piece.hpp"

using namespace std;


int main()
{
    sf::RenderWindow win(sf::VideoMode(720, 720), "Checkerboard");
    sf::RectangleShape rectangle(sf::Vector2f(90, 90));
    rectangle.setFillColor(sf::Color::White);
    
    piece p(0, 0);
    
    vector<sf::RectangleShape> vec;
    vector<sf::CircleShape> vec1;
    
    while (win.isOpen())
    {
        sf::Event event;
        while (win.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                win.close();
            }
        }
        
        win.clear();
        for (int i = 0; i < 8; i++) { //loops through all the rows
            for (int j = 0; j < 8; j++) { //loops through all the columns
                if (i % 2 == 0 && j % 2 == 0) { //Even locations of the board
                    int x = i * 90;
                    int y = j * 90;
                    
                    sf::RectangleShape rectangle(sf::Vector2f(90, 90)); //White rectangles for the board
                    rectangle.setFillColor(sf::Color::White);
                    rectangle.setPosition(sf::Vector2f(x, y));
                    vec.push_back(rectangle);
                    win.draw(rectangle);
                }
                
                //Odd locations of the board
                if (i % 2 != 0 && j % 2 != 0) {
                    int x = i * 90;
                    int y = j * 90;
                    
                    sf::RectangleShape rectangle(sf::Vector2f(90, 90)); //White rectangles for the board
                    rectangle.setFillColor(sf::Color::White);
                    rectangle.setPosition(sf::Vector2f(x, y));
                    vec.push_back(rectangle);
                    win.draw(rectangle);
                }
            }
        }
        p.draw(win);
        win.display();
    }
    
    return 0;
}

