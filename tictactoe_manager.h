/*
 * tictactoe_manager.h
 *
 *  Created on: Nov 19, 2020
 *      Author: roger
 */


#include "tictactoe.h"
#include "tictactoe3.h"
#include "tictactoe4.h"
#include<vector>
#include<string>
#include<iostream>
#include<utility>
#include<memory>

#ifndef TICTACTOE_MANAGER_H
#define TICTACTOE_MANAGER_H

using std::string;
using std::vector;

class TicTacToeManager
{
public:

    void run();

private:
    std::unique_ptr<TicTacToe> tic_tac_toe;
    vector<std::unique_ptr<TicTacToe>> games;

    char yesNo;
    char numSquare = '0';

    bool select_board();
    bool select_player();


};

#endif

