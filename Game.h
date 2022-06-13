//
//  Game.hpp
//  cs32_project1.2
//
//  Created by Jacqueline Duong on 4/3/22.
//

#ifndef Game_h
#define Game_h

#include <stdio.h>
class Mesa; 
class Game
{
  public:
        // Constructor/destructor
    Game(int rows, int cols, int nGarks);
    ~Game();

        // Mutators
    void play();

  private:
    Mesa* m_mesa;
};



#endif /* Game_h */
