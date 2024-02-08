//codesoft intership
// Tic-Tac-Toe by switi kumari
#include <iostream>
#include <vector>

// Function to print the Tic-Tac-Toe board
void printBoard(const std::vector<std::vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            std::cout << cell << " ";
        }
        std::cout << "\n";
    }
}

// Function to check if a player has won
bool checkWin(const std::vector<std::vector<char>>& board, char player) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }

    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}

int main() {
    std::vector<std::vector<char>> board(3, std::vector<char>(3, ' '));
    int row, col;
    char currentPlayer = 'X';

    std::cout << "Welcome to Tic-Tac-Toe!\n";

    while (true) {
        // Print the current board
        printBoard(board);

        // Get player move
        std::cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        std::cin >> row >> col;

        // Check if the move is valid
        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
            std::cout << "Invalid move! Try again.\n";
            continue;
        }

        // Make the move
        board[row - 1][col - 1] = currentPlayer;

        // Check for a win
        if (checkWin(board, currentPlayer)) {
            printBoard(board);
            std::cout << "Player " << currentPlayer << " wins!\n";
            break;
        }

        // Check for a tie
        bool tie = true;
        for (const auto& row : board) {
            for (char cell : row) {
                if (cell == ' ') {
                    tie = false;
                    break;
                }
            }
        }
        if (tie) {
            printBoard(board);
            std::cout << "It's a tie!\n";
            break;
        }

        // Switch to the other player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}