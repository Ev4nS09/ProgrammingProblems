#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a = malloc(sizeof(int));
    *a = 645;

    printf("%d\n", *a);

    printf("Hello World!\n");

    int x = 1;
    while(x < 2)
    {
        x++;
    }
    
    return 0;
}
