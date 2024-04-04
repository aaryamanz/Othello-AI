// reversi.h

#ifndef REVERSI_H
#define REVERSI_H

#include <stdbool.h> // For bool data type

// Function to print the game board
void printBoard(char board[][26], int n);

// Function to check if a given position is within the bounds of the board
bool positionInBounds(int n, int row, int col);

// Function to check if placing a piece of a given color at a specified position is legal in a given direction
bool checkLegalInDirection(char board[][26], int n, int row, int col, char colour, int deltaRow, int deltaCol);

// Function to make a move for the computer by finding the best possible move
int makeMove(char board[26][26], int n, char turn, int *row, int *col);

// Function to change the direction of the pieces on the board after a move is made
void changindirection(char realboard[26][26], int n, char newc1, char newc2, char newc3);

#endif // REVERSI_H
