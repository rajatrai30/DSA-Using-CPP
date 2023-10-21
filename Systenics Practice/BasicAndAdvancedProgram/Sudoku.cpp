#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N = 9; // Size of the Sudoku grid
const int EMPTY = 0;

// Function to print the Sudoku grid
void printGrid(const vector<vector<int>>& grid) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] == EMPTY)
                cout << ". ";
            else
                cout << grid[i][j] << " ";
            if ((j + 1) % 3 == 0 && j < N - 1)
                cout << "| ";
        }
        cout << endl;
        if ((i + 1) % 3 == 0 && i < N - 1)
            cout << "---------------------" << endl;
    }
}

// Function to check if a number is valid in a given row
bool isValidInRow(const vector<vector<int>>& grid, int row, int num) {
    for (int col = 0; col < N; col++) {
        if (grid[row][col] == num) {
            return false;
        }
    }
    return true;
}

// Function to check if a number is valid in a given column
bool isValidInColumn(const vector<vector<int>>& grid, int col, int num) {
    for (int row = 0; row < N; row++) {
        if (grid[row][col] == num) {
            return false;
        }
    }
    return true;
}

// Function to check if a number is valid in a given 3x3 subgrid
bool isValidInSubgrid(const vector<vector<int>>& grid, int row, int col, int num) {
    int subgridStartRow = row - row % 3;
    int subgridStartCol = col - col % 3;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + subgridStartRow][j + subgridStartCol] == num) {
                return false;
            }
        }
    }
    return true;
}

// Function to check if a number is valid in a given position
bool isValidMove(const vector<vector<int>>& grid, int row, int col, int num) {
    return isValidInRow(grid, row, num) && isValidInColumn(grid, col, num) && isValidInSubgrid(grid, row, col, num);
}

// Function to check if the Sudoku puzzle is solved
bool isSolved(const vector<vector<int>>& grid) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            if (grid[row][col] == EMPTY) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    vector<vector<int>> grid(N, vector<int>(N, EMPTY));

    // Generate a partially filled Sudoku puzzle (you can replace this with your own puzzle)
    srand(time(0));
    for (int i = 0; i < 20; i++) {
        int row, col, num;
        do {
            row = rand() % N;
            col = rand() % N;
            num = rand() % N + 1;
        } while (!isValidMove(grid, row, col, num));
        grid[row][col] = num;
    }

    cout << "Sudoku Grid:\n";
    printGrid(grid);

    while (!isSolved(grid)) {
        int row, col, num;
        cout << "Enter row, column, and number (e.g., 1 2 3): ";
        cin >> row >> col >> num;
        
        if (row < 1 || row > N || col < 1 || col > N || num < 1 || num > N || !isValidMove(grid, row - 1, col - 1, num)) {
            cout << "Invalid move. Try again." << endl;
        } else {
            grid[row - 1][col - 1] = num;
            cout << "Updated Sudoku Grid:\n";
            printGrid(grid);
        }
    }

    cout << "Congratulations! You solved the Sudoku puzzle." << endl;

    return 0;
}
