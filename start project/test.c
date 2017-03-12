#include <stdio.h>

void apples_set(int value);
int apples_get();

void oranges_set(int value);
int oranges_get();

int main()
{
    apples_set(50);
    oranges_set(20);
    printf("hello world\n");
    printf("apples=%d \n", apples_get());
    printf("oranges=%d \n", oranges_get());
    return 0;
}