#include<stdio.h>

#define SIZE 3
void printBoard(char board[SIZE][SIZE]);
int checkWin(char board[SIZE][SIZE]);
int main() {
    char board[SIZE][SIZE] = {{' ', ' ', ' '},
                           {' ', ' ', ' '},
                           {' ', ' ', ' '}};
    int row, col, moves = 0;
    char player = 'X';
    printf("Welcome to Tic Tac Toe!\n");
    printBoard(board);
    while(moves < SIZE * SIZE) {
        printf("Player %c, enter your move (row and column): ", player);
        scanf("%d %d", &row, &col);
        if(row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[row][col] != ' ') {
            printf("Invalid move. Try again.\n");
            continue;
        }
        board[row][col] = player;
        printBoard(board);
        if(checkWin(board)) {
            printf("Player %c wins!\n", player);
            return 0;
        }
        player = (player == 'X') ? 'O' : 'X';
        moves++;
    }
    printf("It's a draw!\n");
    return 0;
}

void printBoard(char board[SIZE][SIZE]) {
    printf("\n");
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf(" %c ", board[i][j]);
            if(j < SIZE - 1) printf("|");
        }
        printf("\n");
        if(i < SIZE - 1) {
            for(int k = 0; k < SIZE; k++) {
                printf("---");
                if(k < SIZE - 1) printf("+");
            }
            printf("\n");
        }
    }
    printf("\n");
}

int checkWin(char board[SIZE][SIZE]) {
    // Check rows and columns
    for(int i = 0; i < SIZE; i++) {
        if((board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') ||
           (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')) {
            return 1;
        }
    }
    // Check diagonals
    if((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') ||
       (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {
        return 1;
    }
    return 0;
}
