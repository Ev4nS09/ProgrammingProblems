#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* a = malloc(sizeof(int));
    int* b = malloc(sizeof(int));

    *a = 5;
    *b = 10;

    a = (int*) ((long long) a ^ (long long) b);
    b = (int*) ((long long) a ^ (long long) b);
    a = (int*) ((long long) a ^ (long long) b);

    printf("%d %d\n", *a, *b);
}


