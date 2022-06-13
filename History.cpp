//
//  History.cpp
//  cs32_project1.2
//
//  Created by Jacqueline Duong on 4/3/22.
//


#include "History.h"
#include "globals.h"
#include <iostream>
#include <cstdlib>

using namespace std;

History::History(int nRows, int nCols)
{
    
    m_rows= nRows;
    m_cols= nCols;
    for(int i=0; i<MAXROWS;i++){
        for(int j=0; j<MAXCOLS;j++){
            //initialize the grid
            m_grid[i][j]='.';
        }
    }
}

bool History::record(int r, int c)
{

    if((r>m_rows||r<1||c>m_cols||c<1)){
        return false;
    }else{
        if(m_grid[r-1][c-1]=='.'){
            m_grid[r-1][c-1]='A';
        }else if(m_grid[r-1][c-1]=='Z'){
            m_grid[r-1][c-1]='Z';
        }else{
            m_grid[r-1][c-1]+=1;
        }
    }
    return true;
}

void History::display() const
{
    clearScreen();
    for (int r = 0; r < m_rows; r++)
    {
        for (int c = 0; c < m_cols; c++)
            cout << m_grid[r][c];
        cout << endl;
    }
    cout << endl;
}




