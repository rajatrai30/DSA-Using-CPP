#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

// Function to print the Tic-Tac-Toe board
void printBoard(char board[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << board[i][j];
            if (j < COLS - 1)
                cout << " | ";
        }
        cout << endl;
        if (i < ROWS - 1)
            cout << "---------\n";
    }
}

// Function to check if there is a win
bool checkWin(char board[ROWS][COLS], char player) {
    for (int i = 0; i < ROWS; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
    }

    for (int j = 0; j < COLS; j++) {
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player)
            return true;
    }

    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;

    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}

// Function to check if the board is full (a draw)
bool checkDraw(char board[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return false;
        }
    }
    return true;
}

int main() {
    char board[ROWS][COLS] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    char currentPlayer = 'X';
    int move;
    
    cout << "Tic-Tac-Toe Game\n";
    printBoard(board);

    while (true) {
        cout << "Player " << currentPlayer << ", enter your move (1-9): ";
        cin >> move;

        if (move < 1 || move > 9) {
            cout << "Invalid move. Please choose a number between 1 and 9.\n";
            continue;
        }

        int row = (move - 1) / COLS;
        int col = (move - 1) % COLS;

        if (board[row][col] == 'X' || board[row][col] == 'O') {
            cout << "Invalid move. That position is already taken.\n";
        }

        else {
            board[row][col] = currentPlayer;
            printBoard(board);

            if (checkWin(board, currentPlayer)) {
                cout << "Player " << currentPlayer << " wins!\n";
                break;
            }
            else if (checkDraw(board)) {
                cout << "It's a draw!\n";
                break;
            }

            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }
    return 0;
}
