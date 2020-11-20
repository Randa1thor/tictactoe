/*
 * tictactoe.h
 *
 *  Created on: Nov 19, 2020
 *      Author: roger
 *   The bare minimum for a tic tac toe game
 *
 */

#include<vector>
#include<string>


#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe
{
public:

    static char const TOKEN_X='X';
    static char const TOKEN_O='O';
    static char const TOKEN_EMPTY=' ';

    TicTacToe(int s) : pegs (s*s, TicTacToe::pEmpty){}
    TicTacToe(std::vector<char *> p, std::string win) : pegs(p), winner(win){}

    char * pX=const_cast<char *>(&TOKEN_X);
	char * pO=const_cast<char *>(&TOKEN_O);
	char * pEmpty=const_cast<char *>(&TOKEN_EMPTY);


    char * get_player(){return player;}
    std::string get_winner(){return winner;}

    bool game_over();

    void set_first_player(char * first_player);
    void mark_board(int position);

    std::vector<char*> get_pegs(){return pegs;}

protected:

    std::vector<char*> pegs;

    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();

private:
    std::string winner;
    char * player;

    bool check_board_full();
    void set_next_player();
    void set_winner();
    void clear_board();
};

#endif




