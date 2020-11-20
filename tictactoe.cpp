/*
 * tictactoe.cpp
 *
 *  Created on: Nov 19, 2020
 *      Author: roger
 *
 */

#include "tictactoe.h"
#include <iostream>
using std::vector;


bool TicTacToe::game_over()
{
		if(check_column_win() == true)
	    {
	        set_winner();
	        return true;
	    }
	    else if(check_row_win() == true)
	    {
	        set_winner();
	        return true;
	    }
	    else if(check_diagonal_win() == true)
	    {
	        set_winner();
	        return true;
	    }
	    else if(check_board_full() == true)
	    {
	        winner = "Tie!";
	        return true;
	    }
	    return false;
}

bool TicTacToe::check_board_full()
{
    for(auto peg: pegs)
    {
        if(*peg == TOKEN_EMPTY)
        {
            return false;
        }
    }
    return true;
}

bool TicTacToe::check_column_win()
{
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    return false;
}

void TicTacToe::set_first_player(char* first_player)
{
    player = first_player;

}

void TicTacToe::mark_board(int position)
{
	//check if empty position
    if(*pegs[position-1] == TOKEN_X|| *pegs[position-1] == TOKEN_O)
    {
        std::cout<<"Position played already!\n";
        return;
    }
    //if position is empty set peg and next player
    pegs[position-1] = player;

    if(game_over() == false)
    {
    	set_next_player();
    }

}

void TicTacToe::set_next_player()
{
	//toggle players from char x to o or o to x
    if(*player == *pX)
    {
        player = pX;
        return; //I like to just get out of the memory block vs else statements
    }
    player = pO;

}

void TicTacToe::clear_board()
{
	//set all pegs to blanks
    for(std::size_t i=0; i < pegs.size(); ++i)
    {
        pegs[i] = pEmpty;
    }

}

void TicTacToe::set_winner()
{

    if(*player == TOKEN_X)
    {
        winner = TOKEN_X;
        return; //prefer to exit memory block as soon as possible
    }

    winner = TOKEN_O;

}




