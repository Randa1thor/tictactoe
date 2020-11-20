/*
 * tictactoe3.cpp
 *
 *  Created on: Nov 19, 2020
 *      Author: roger
 */


#include "tictactoe3.h"


bool TicTacToe3::check_column_win()
{
    for(std::size_t i=0; i < 3; ++i)
    {
        if(*pegs[i] ==TOKEN_X && *pegs[i+3] ==TOKEN_X && *pegs[i+6] ==TOKEN_X)
        {
            return true;
        }
        else if(*pegs[i] ==TOKEN_O && *pegs[i+3] ==TOKEN_O && *pegs[i+6] ==TOKEN_O)
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe3::check_row_win()
{
    for(std::size_t i=0; i < 7; i += 3)
    {
        if(*pegs[i] ==TOKEN_X && *pegs[i+1] ==TOKEN_X && *pegs[i+2] ==TOKEN_X)
        {
            return true;
        }
        else if(*pegs[i] ==TOKEN_O && *pegs[i+1] ==TOKEN_O && *pegs[i+2] ==TOKEN_O)
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe3::check_diagonal_win()
{
    if(*pegs[0] ==TOKEN_X && *pegs[4] ==TOKEN_X && *pegs[8] ==TOKEN_X)
    {
        return true;
    }
    else if(*pegs[2] ==TOKEN_X && *pegs[4] ==TOKEN_X && *pegs[6] ==TOKEN_X)
    {
        return true;
    }
    else if(*pegs[0] ==TOKEN_O && *pegs[4] ==TOKEN_O && *pegs[8] ==TOKEN_O)
    {
        return true;
    }
    else if(*pegs[6] ==TOKEN_O && *pegs[4] ==TOKEN_O && *pegs[2] ==TOKEN_O)
    {
        return true;
    }
    return false;
}


