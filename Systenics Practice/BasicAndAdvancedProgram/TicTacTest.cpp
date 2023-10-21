#include<iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

// PRINT
void PrintBoard(char board[ROWS][COLS]){
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++){
            cout<<board[i][j];
            if(j<COLS-1){
                cout<<" | ";
            }
        }
        cout<<endl;
        if(i<ROWS-1){
            cout<<"---------\n";
        }
    }
}

// CHECK WINN
bool checkWin(char board[ROWS][COLS], char player){
    for(int i=0;i<ROWS;i++){
        if(board[i][0] == player && board[i][1] == player && board[i][2] == player){
            return true;
        }
    }
    for(int j=0;j<COLS;j++){
        if(board[0][j] == player && board[1][j] == player && board[2][j] == player){
            return true;
        }
    }
    if(board[0][0] == player && board[1][1] == player && board[2][2] == player){
        return true;
    }
    if(board[0][2] == player && board[1][1] == player && board[2][0] == player){
        return true;
    }
    return false;
}

// CHECK DRAWWW
bool checkDraw(char board[ROWS][COLS]){
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++){
            if(board[i][j] != 'X' && board[i][j] != 'O'){
                return false;
            }
        }
    }
    return true;
}

// DRIVER CODE
int main(){
    char board[ROWS][COLS] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    char currentPlayer = 'X';
    int move;

    while(true){
        cout<<"Tic Tac Toe\n";
        PrintBoard(board);
        cout<<"Player "<<currentPlayer<<"'s turn. Enter your move (1-9): ";
        cin>>move;

        // BASE CONDITION
        if(move<1 || move>9){
            cout<<"Invalid Move. Try Again\n";
            continue;
        }

        // DEFINE row, col
        int row = (move-1) / COLS;
        int col = (move-1) % COLS;

        // ALREADY FILLED
        if(board[row][col] == 'X' || board[row][col] == 'O'){
            cout<<"Position already filled. Try Again\n";
            continue;
        }
        else{
            board[row][col] = currentPlayer;
            PrintBoard(board);

            // CHECK WIN
            if(checkWin(board, currentPlayer)){
                cout<<"Player "<<currentPlayer<<" wins!\n";
                break;
            }
            // CHECK DRAW
            else if(checkDraw(board)){
                cout<<"Draw!\n";
                break;
            }
        }
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
}