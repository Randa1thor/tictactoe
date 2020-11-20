/*
 * tictactoe_manager.cpp
 *
 *  Created on: Nov 19, 2020
 *      Author: roger
 */

#include "tictactoe_manager.h"
#include<iostream>

using std::cout;
using std::cin;

void TicTacToeManager::run() {
	cout << "Welcome to the Tic Tac Toe Application!!\n";

	while (!select_board()) {
	}
	while (!select_player()) {
	}

}

bool TicTacToeManager::select_board() {
	// this is the problem!!!!  line 38 and 41 if you uncomment it breaks the damn compiler.
	/*
	 *
	 *
	 * The damn thing says I have not defined my TOKENS bullshit I have!!!
	 * I fucking hate C++ lol
	 * And stack overflow.... just not helpful for me lets put it that way.
	 *
	 */
	cout << "Please select 3x3 or 4x4 game (3 or 4): ";
	//still don't know the best way to handle all inputs without infinite looping or crashing
	cin >> numSquare;
	if (numSquare == '3') {
		//tic_tac_toe = std::make_unique<TicTacToe3>();
		return true;
	} else if (numSquare == '4') {
		//tic_tac_toe = std::make_unique<TicTacToe4>();
		return true;
	}

	cout << "Invalid selection!\n";

	return false;

}

bool TicTacToeManager::select_player() {
	std::string player = "";
	cout << "Enter X or O: ";
	cin >> player;

	if (player == "x" || player == "X") {
		//tic_tac_toe->set_first_player(tic_tac_toe->pX);
		return true;
	} else if (player == "o" || player == "O") {
		//tic_tac_toe->set_first_player(tic_tac_toe->pO);
		return true;
	}

		cout << "Invalid player!\n";
		player = "";
		return false;
}

