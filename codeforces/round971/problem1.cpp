#include <stdio.h>
#include <cstdio>

void problemA(int* a, int size)
{
    for(int i = 0; i < size; i+=2)
    {
        int c = (a[i] + a[i+1]) / 2;

        printf("%d\n", (c - a[i]) + (a[i+1] - c));
    }
}

int main()
{
    int array[110];
    int lines;
    scanf("%d", &lines);

    for(int i = 0; i < lines * 2; i+=2)
    {
        int a;
        int b;

        scanf("%d %d", &a, &b);

        array[i] = a;
        array[i+1] = b;
    }

    problemA(array, lines * 2);

    return 0;
}

