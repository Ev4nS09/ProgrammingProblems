#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isValidSudoku(char board[9][9], int boardSize) 
{       
    for (int i = 0; i < boardSize; i++) {
        int *memory = calloc(boardSize, sizeof(int));

        for (int j = 0; j < boardSize; j++) {
            if (board[i][j] != '.' && ++memory[board[i][j] - 48 - 1] > 1)
                return 0;
        }

        free(memory);
    }

    for (int i = 0; i < boardSize; i++) {
        int *memory = calloc(boardSize, sizeof(int));

        for (int j = 0; j < boardSize; j++) {
            if (board[j][i] != '.' && ++memory[board[j][i] - 48 - 1] > 1)
                return 0;
        }        
        
        free(memory);
    }

    for (int sq = 0; sq < boardSize; sq++) {
        int *memory = calloc(boardSize, sizeof(int));

        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                if (board[row + (3 * (sq / 3))][col + (sq * 3)] != '.' && ++memory[board[row + (3 * (sq / 3))][col + (sq * 3)] - 48 - 1] > 1)
                {
                    return 0;
                }
            }        
        }
        free(memory);
    }
    return 1;
}

int main()
{
  
    char x[9][9] = 
    {{'.','.','.','.','5','.','.','1','.'},{'.','4','.','3','.','.','.','.','.'},{'.','.','.','.','.','3','.','.','1'}
    ,{'8','.','.','.','.','.','.','2','.'},{'.','.','2','.','7','.','.','.','.'},{'.','1','5','.','.','.','.','.','.'}
    ,{'.','.','.','.','.','2','.','.','.'},{'.','2','.','9','.','.','.','.','.'},{'.','.','4','.','.','.','.','.','.'}};

printf("%d\n", isValidSudoku(x, 9));

}
