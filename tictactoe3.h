/*
 * tictactoe3.h
 *
 *  Created on: Nov 19, 2020
 *      Author: roger
 *      Handles check wins for diagnol rows and columns for 3x3
 *      indexs as 7 | 8 | 9              6 | 7 | 8
 *                4 | 5 | 6              3 | 4 | 5
 *                1 | 2 | 3 for players  0 | 1 | 2  for the vector
 */

#include "tictactoe.h"

#ifndef TICTACTOE3_H
#define TICTACTOE3_H

class TicTacToe3 : public TicTacToe
{
public:
    TicTacToe3() : TicTacToe(3){}
    TicTacToe3(std::vector<char*> p, std::string winner) : TicTacToe(p, winner){}

private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
};
#endif





