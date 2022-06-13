//
//  History.hpp
//  cs32_project1.2
//
//  Created by Jacqueline Duong on 4/3/22.
//

#ifndef History_h
#define History_h

#include <stdio.h>
#include "globals.h"

class History
    {
      public:
        History(int nRows, int nCols);
        bool record(int r, int c);
        void display() const;
    private:
        int m_rows;
        int m_cols;
        char m_grid[MAXROWS][MAXCOLS];
    };

#endif /* History_hpp */
