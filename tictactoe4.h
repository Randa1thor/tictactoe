/*
 * tictactoe4.h
 *
 *  Created on: Nov 19, 2020
 *      Author: roger
 *      Handles check wins for diagnol rows and columns for 3x3
 *      indexs as 13 | 14 | 15 | 16             12 | 13 | 14 | 15
 *                9  | 10 | 11 | 12             8  | 9  | 10 | 11
 *                5  | 6  | 7  | 8              4  | 5  | 6  | 7
 *                1  | 2  | 3  | 4 for players  0  | 1  | 2  | 3 for the vector
 *
 */

#include "tictactoe.h"

#ifndef TICTACTOE4_H
#define TICTACTOE4_H

class TicTacToe4 : public TicTacToe
{
public:
    TicTacToe4() : TicTacToe(4){}
    TicTacToe4(std::vector<char*> p, std::string winner) : TicTacToe(p, winner){}

private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
};
#endif


