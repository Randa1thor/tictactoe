/*
 * tictactoe4.cpp
 *
 *  Created on: Nov 19, 2020
 *      Author: roger
 */

#include "tictactoe4.h"

bool TicTacToe4::check_column_win()
{
    for(std::size_t i=0; i < 4; ++i)
    {
        if ( *pegs[i] == TOKEN_X && *pegs[i+4] == TOKEN_X && *pegs[i+8] == TOKEN_X && *pegs[i+12] == TOKEN_X)
        {
            return true;
        }
        else if ( *pegs[i] == TOKEN_O && *pegs[i+4] == TOKEN_O && *pegs[i+8] == TOKEN_O && *pegs[i+12] == TOKEN_O)
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe4::check_row_win()
{
    for(std::size_t i=0; i < pegs.size(); i += 4)
    {
        if ( *pegs[i] == TOKEN_X && *pegs[i+1] == TOKEN_X && *pegs[i+2] == TOKEN_X && *pegs[i+3] == TOKEN_X)
        {
            return true;
        }
        else if ( *pegs[i] == TOKEN_O && *pegs[i+1] == TOKEN_O && *pegs[i+2] == TOKEN_O && *pegs[i+3] == TOKEN_O)
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe4::check_diagonal_win()
{
    if ( *pegs[0] == TOKEN_X && *pegs[5] == TOKEN_X && *pegs[10] == TOKEN_X && *pegs[15] == TOKEN_X)
    {
        return true;
    }
    else if ( *pegs[3] == TOKEN_X && *pegs[6] == TOKEN_X && *pegs[9] == TOKEN_X && *pegs[12] == TOKEN_X)
    {
        return true;
    }
    else if ( *pegs[0] == TOKEN_O && *pegs[5] == TOKEN_O && *pegs[10] == TOKEN_O && *pegs[15] == TOKEN_O)
    {
        return true;
    }
    else if ( *pegs[3] == TOKEN_O && *pegs[6] == TOKEN_O && *pegs[9] == TOKEN_O && *pegs[12] == TOKEN_O)
    {
        return true;
    }
    return false;
}






