#include <stdio.h>
#include <cstdio>

#define MAX_TESTS 10000
#define MAX_NUMBERS 30000

void problemC(int* a, int size)
{
    for(int i = 0; i < size; i+=2)
    {
        int c = (a[i] + a[i+1]) / 2;

        printf("%d\n", (c - a[i]) + (a[i+1] - c));
    }
}

int main()
{
    int array[MAX_NUMBERS];
    int lines;
    scanf("%d", &lines);

    for(int i = 0; i < lines * 3; i+=3)
    {
        int x;
        int y;
        int k;

        scanf("%d %d %d", &x, &y, &k);

        array[i] = x;
        array[i+1] = y;
        array[i+2] = k;
    }

    problemC(array, lines * 3);

    return 0;
}

