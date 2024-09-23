#include <stdio.h>
#include <cstdio>

#define MAX_MATRICES 100
#define MAX_ROWS 500
#define COLLUMNS 4

void problemB(char a[MAX_MATRICES][MAX_ROWS][COLLUMNS], int nofmatrices, int* sizes)
{
    for(int i = 0; i < nofmatrices; i++) 
    {
        for(int row = sizes[i] - 1; row >= 0; row--)
        {
            for(int col = 0; col < COLLUMNS; col++)
            {
                if(a[i][row][col] == '#')
                    printf("%d ", col+1);
            }
        }
        printf("\n");
    }
}

int main()
{
    char a[MAX_MATRICES][MAX_ROWS][COLLUMNS];
    int sizes[MAX_MATRICES];
    int ntests;
    scanf("%d", &ntests);

    for(int i = 0; i < ntests; i++)
    {
        int rows;
        scanf("%d", &rows);

        sizes[i] = rows;

        for(int j = 0; j < rows; j++)
        {
           char pos1; 
           char pos2; 
           char pos3; 
           char pos4; 

           scanf(" %c%c%c%c", &pos1, &pos2, &pos3, &pos4);

           a[i][j][0] = pos1;
           a[i][j][1] = pos2;
           a[i][j][2] = pos3;
           a[i][j][3] = pos4;
        }

    }

    problemB(a, ntests, sizes);

    return 0;
}

