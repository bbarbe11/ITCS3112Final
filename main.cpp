#include <SFML/Graphics.hpp>
#include <iostream>
#include "redPiece.hpp"
#include "blackPiece.hpp"
#include "logic.hpp"

using namespace std;

/**

* Driver for checkers game

*

* @param none

* @return none

*/
int main()
{
    
    
    sf::RenderWindow win(sf::VideoMode(720, 720), "Checkerboard");
    sf::RectangleShape rectangle(sf::Vector2f(90, 90));
    rectangle.setFillColor(sf::Color::White);
    //create objects for every piece because you need to be able to differentiate pieces
    redPiece r1(0, 0);
    redPiece r2(0, 0);
    redPiece r3(0, 0);
    redPiece r4(0, 0);
    redPiece r5(0, 0);
    redPiece r6(0, 0);
    redPiece r7(0, 0);
    redPiece r8(0, 0);
    redPiece r9(0, 0);
    redPiece r10(0, 0);
    redPiece r11(0, 0);
    redPiece r12(0, 0);
    blackPiece b1(0,0);
    blackPiece b2(0,0);
    blackPiece b3(0,0);
    blackPiece b4(0,0);
    blackPiece b5(0,0);
    blackPiece b6(0,0);
    blackPiece b7(0,0);
    blackPiece b8(0,0);
    blackPiece b9(0,0);
    blackPiece b10(0,0);
    blackPiece b11(0,0);
    blackPiece b12(0,0);
    //vector locations of each legal square
    sf::Vector2f s1 = sf::Vector2f(45, 45);
    sf::Vector2f s2 = sf::Vector2f(225, 45);
    sf::Vector2f s3 = sf::Vector2f(405, 45);
    sf::Vector2f s4 = sf::Vector2f(585, 45);
    sf::Vector2f s5 = sf::Vector2f(135, 135);
    sf::Vector2f s6 = sf::Vector2f(315, 135);
    sf::Vector2f s7 = sf::Vector2f(495, 135);
    sf::Vector2f s8 = sf::Vector2f(675, 135);
    sf::Vector2f s9 = sf::Vector2f(45, 225);
    sf::Vector2f s10 = sf::Vector2f(225, 225);
    sf::Vector2f s11 = sf::Vector2f(405, 225);
    sf::Vector2f s12 = sf::Vector2f(585, 225);
    sf::Vector2f s13 = sf::Vector2f(135, 495);
    sf::Vector2f s14 = sf::Vector2f(315, 495);
    sf::Vector2f s15 = sf::Vector2f(495, 495);
    sf::Vector2f s16 = sf::Vector2f(675, 495);
    sf::Vector2f s17 = sf::Vector2f(45, 585);
    sf::Vector2f s18 = sf::Vector2f(225, 585);
    sf::Vector2f s19 = sf::Vector2f(405, 585);
    sf::Vector2f s20 = sf::Vector2f(585, 585);
    sf::Vector2f s21 = sf::Vector2f(135, 675);
    sf::Vector2f s22 = sf::Vector2f(315, 675);
    sf::Vector2f s23 = sf::Vector2f(495, 675);
    sf::Vector2f s24 = sf::Vector2f(675, 675);
    //middle squares
    sf::Vector2f s25 = sf::Vector2f(135, 315);
    sf::Vector2f s26 = sf::Vector2f(315, 315);
    sf::Vector2f s27 = sf::Vector2f(495, 315);
    sf::Vector2f s28 = sf::Vector2f(675, 315);
    sf::Vector2f s29 = sf::Vector2f(45, 405);
    sf::Vector2f s30 = sf::Vector2f(225, 405);
    sf::Vector2f s31 = sf::Vector2f(405, 405);
    sf::Vector2f s32 = sf::Vector2f(585, 405);
    
    sf::Vector2f vec1 = sf::Vector2f(45, 45);
    sf::Vector2f vec2 = sf::Vector2f(225, 45);
    sf::Vector2f vec3 = sf::Vector2f(405, 45);
    sf::Vector2f vec4 = sf::Vector2f(585, 45);
    sf::Vector2f vec5 = sf::Vector2f(135, 135);
    sf::Vector2f vec6 = sf::Vector2f(315, 135);
    sf::Vector2f vec7 = sf::Vector2f(495, 135);
    sf::Vector2f vec8 = sf::Vector2f(675, 135);
    sf::Vector2f vec9 = sf::Vector2f(45, 225);
    sf::Vector2f vec10 = sf::Vector2f(225, 225);
    sf::Vector2f vec11 = sf::Vector2f(405, 225);
    sf::Vector2f vec12 = sf::Vector2f(585, 225);
    sf::Vector2f vec13 = sf::Vector2f(135, 495);
    sf::Vector2f vec14 = sf::Vector2f(315, 495);
    sf::Vector2f vec15 = sf::Vector2f(495, 495);
    sf::Vector2f vec16 = sf::Vector2f(675, 495);
    sf::Vector2f vec17 = sf::Vector2f(45, 585);
    sf::Vector2f vec18 = sf::Vector2f(225, 585);
    sf::Vector2f vec19 = sf::Vector2f(405, 585);
    sf::Vector2f vec20 = sf::Vector2f(585, 585);
    sf::Vector2f vec21 = sf::Vector2f(135, 675);
    sf::Vector2f vec22 = sf::Vector2f(315, 675);
    sf::Vector2f vec23 = sf::Vector2f(495, 675);
    sf::Vector2f vec24 = sf::Vector2f(675, 675);

    vector<sf::RectangleShape> vec;
    vector<sf::CircleShape> vecC;
    sf::Vector2i vecM;
    win.setFramerateLimit(60);

    while (win.isOpen())
    {
        
        sf::Event event;
        while (win.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                win.close();
            }
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){
                sf::Vector2i vecM = sf::Mouse::getPosition(win);
                
                //for each of these 32 if statements, set the mouse location to the center of a square if the mouse is inside of that square
                if(vecM.x<90&&vecM.y<90){
                    vecM= sf::Vector2i(s1);
                }
                if(vecM.x>90&&vecM.x<270&&vecM.y<90){
                    vecM= sf::Vector2i(s2);
                }
                if(vecM.x>270&&vecM.x<450&&vecM.y<90){
                    vecM= sf::Vector2i(s3);
                }
                if(vecM.x>450&&vecM.x<630&&vecM.y<90){
                    vecM= sf::Vector2i(s4);
                }
                if(vecM.x<180&&vecM.y<180&&vecM.y>90){
                    vecM= sf::Vector2i(s5);
                }
                if(vecM.x>270&&vecM.x<360&&vecM.y<180&&vecM.y>90){
                    vecM= sf::Vector2i(s6);
                }
                if(vecM.x>450&&vecM.x<540&&vecM.y<180&&vecM.y>90){
                    vecM= sf::Vector2i(s7);
                }
                if(vecM.x>630&&vecM.x<720&&vecM.y<180&&vecM.y>90){
                    vecM= sf::Vector2i(s8);
                }
                if(vecM.x<90&&vecM.y<270&&vecM.y>180){
                    vecM= sf::Vector2i(s9);
                }
                if(vecM.x>90&&vecM.x<270&&vecM.y<270&&vecM.y>180){
                    vecM= sf::Vector2i(s10);
                }
                if(vecM.x>270&&vecM.x<450&&vecM.y<270&&vecM.y>180){
                    vecM= sf::Vector2i(s11);
                }
                if(vecM.x>450&&vecM.x<630&&vecM.y<270&&vecM.y>180){
                    vecM= sf::Vector2i(s12);
                }
                if(vecM.x<180&&vecM.y<360&&vecM.y>270){
                    vecM= sf::Vector2i(s25);
                }
                if(vecM.x>270&&vecM.x<360&&vecM.y<360&&vecM.y>270){
                    vecM= sf::Vector2i(s26);
                }
                if(vecM.x>450&&vecM.x<540&&vecM.y<360&&vecM.y>270){
                    vecM= sf::Vector2i(s27);
                }
                if(vecM.x>630&&vecM.x<720&&vecM.y<360&&vecM.y>270){
                    vecM= sf::Vector2i(s28);
                }
                if(vecM.x<90&&vecM.y<450&&vecM.y>360){
                    vecM= sf::Vector2i(s29);
                }
                if(vecM.x>90&&vecM.x<270&&vecM.y<450&&vecM.y>360){
                    vecM= sf::Vector2i(s30);
                }
                if(vecM.x>270&&vecM.x<450&&vecM.y<450&&vecM.y>360){
                    vecM= sf::Vector2i(s31);
                }
                if(vecM.x>450&&vecM.x<630&&vecM.y<450&&vecM.y>360){
                    vecM= sf::Vector2i(s32);
                }
                if(vecM.x<180&&vecM.y<540&&vecM.y>450){
                    vecM= sf::Vector2i(s13);
                }
                if(vecM.x>270&&vecM.x<360&&vecM.y<540&&vecM.y>450){
                    vecM= sf::Vector2i(s14);
                }
                if(vecM.x>450&&vecM.x<540&&vecM.y<540&&vecM.y>450){
                    vecM= sf::Vector2i(s15);
                }
                if(vecM.x>630&&vecM.x<720&&vecM.y<540&&vecM.y>450){
                    vecM= sf::Vector2i(s16);
                }
                if(vecM.x<90&&vecM.y<630&&vecM.y>540){
                    vecM= sf::Vector2i(s17);
                }
                if(vecM.x>90&&vecM.x<270&&vecM.y<630&&vecM.y>540){
                    vecM= sf::Vector2i(s18);
                }
                if(vecM.x>270&&vecM.x<450&&vecM.y<630&&vecM.y>540){
                    vecM= sf::Vector2i(s19);
                }
                if(vecM.x>450&&vecM.x<630&&vecM.y<630&&vecM.y>540){
                    vecM= sf::Vector2i(s20);
                }
                if(vecM.x<180&&vecM.y<720&&vecM.y>630){
                    vecM= sf::Vector2i(s21);
                }
                if(vecM.x>270&&vecM.x<360&&vecM.y<720&&vecM.y>630){
                    vecM= sf::Vector2i(s22);
                }
                if(vecM.x>450&&vecM.x<540&&vecM.y<720&&vecM.y>630){
                    vecM= sf::Vector2i(s23);
                }
                if(vecM.x>630&&vecM.x<720&&vecM.y<720&&vecM.y>630){
                    vecM= sf::Vector2i(s24);
                }
                
                //move pieces when clicked and dragged to another space
                if((vecM.x-40>vec1.x>vecM.x+40)&&(vecM.y-40>vec1.x>vecM.y+40)){
                    vec1= sf::Vector2f(vecM);
                }
                if((vecM.x-40>vec2.x>vecM.x+40)&&(vecM.y-40>vec2.x>vecM.y+40)){
                    vec2= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec3.x>vecM.x-40)&&(vecM.y+40>vec3.x>vecM.y-40)){
                    vec3= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec4.x>vecM.x-40)&&(vecM.y+40>vec4.x>vecM.y-40)){
                    vec4= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec5.x>vecM.x-40)&&(vecM.y+40>vec5.x>vecM.y-40)){
                    vec5= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec6.x>vecM.x-40)&&(vecM.y+40>vec6.x>vecM.y-40)){
                    vec6= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec7.x>vecM.x-40)&&(vecM.y+40>vec7.x>vecM.y-40)){
                    vec7= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec8.x>vecM.x-40)&&(vecM.y+40>vec8.x>vecM.y-40)){
                    vec8= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec9.x>vecM.x-40)&&(vecM.y+40>vec9.x>vecM.y-40)){
                    vec9= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec10.x>vecM.x-40)&&(vecM.y+40>vec10.x>vecM.y-40)){
                    vec10= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec11.x>vecM.x-40)&&(vecM.y+40>vec11.x>vecM.y-40)){
                    vec11= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec12.x>vecM.x-40)&&(vecM.y+40>vec12.x>vecM.y-40)){
                    vec12= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec13.x>vecM.x-40)&&(vecM.y+40>vec13.x>vecM.y-40)){
                    vec13= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec14.x>vecM.x-40)&&(vecM.y+40>vec14.x>vecM.y-40)){
                    vec14= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec15.x>vecM.x-40)&&(vecM.y+40>vec15.x>vecM.y-40)){
                    vec15= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec16.x>vecM.x-40)&&(vecM.y+40>vec16.x>vecM.y-40)){
                    vec16= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec17.x>vecM.x-40)&&(vecM.y+40>vec17.x>vecM.y-40)){
                    vec17= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec18.x>vecM.x-40)&&(vecM.y+40>vec18.x>vecM.y-40)){
                    vec18= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec19.x>vecM.x-40)&&(vecM.y+40>vec19.x>vecM.y-40)){
                    vec19= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec20.x>vecM.x-40)&&(vecM.y+40>vec20.x>vecM.y-40)){
                    vec20= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec21.x>vecM.x-40)&&(vecM.y+40>vec21.x>vecM.y-40)){
                    vec21= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec22.x>vecM.x-40)&&(vecM.y+40>vec22.x>vecM.y-40)){
                    vec22= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec23.x>vecM.x-40)&&(vecM.y+40>vec23.x>vecM.y-40)){
                    vec23= sf::Vector2f(vecM);
                }
                if((vecM.x+40>vec24.x>vecM.x-40)&&(vecM.y+40>vec24.x>vecM.y-40)){
                    vec24= sf::Vector2f(vecM);
                }
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
       
        //draw red pieces to their locations
        r1.draw(win,vec1);
        r2.draw(win,vec2);
        r3.draw(win,vec3);
        r4.draw(win,vec4);
        r5.draw(win,vec5);
        r6.draw(win,vec6);
        r7.draw(win,vec7);
        r8.draw(win,vec8);
        r9.draw(win,vec9);
        r10.draw(win,vec10);
        r11.draw(win,vec11);
        r12.draw(win,vec12);
        //draw black pieces to their locations
        b1.draw(win,vec13);
        b2.draw(win,vec14);
        b3.draw(win,vec15);
        b4.draw(win,vec16);
        b5.draw(win,vec17);
        b6.draw(win,vec18);
        b7.draw(win,vec19);
        b8.draw(win,vec20);
        b9.draw(win,vec21);
        b10.draw(win,vec22);
        b11.draw(win,vec23);
        b12.draw(win,vec24);

        win.display();
    }

    return 0;
}


