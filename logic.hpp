//  logic.hpp
//  Final Project
//

#ifndef logic_hpp
#define logic_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

/**

* Header for logic.

*

* @param none

* @return none

*/
class logic{
public:
    logic();
    bool isLegalMove();
    bool changeTurn();

private:
};

#endif /* redPiece_hpp */
