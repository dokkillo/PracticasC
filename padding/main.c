#include <stdio.h>

typedef struct {
    short one; //XX__
    int two; //XXXX
    short third; //XX__
} layout;

typedef struct {
    short one; //XX
    short third; //XX
    int two; //XXXX
} layoutFix;

int main()
{
    printf("short %d\n", (int) sizeof(short));
    printf("int %d\n", (int) sizeof(int));
    printf("struct layout %d\n", (int) sizeof(layout));
    printf("struct layoutFix %d\n", (int) sizeof(layoutFix));

}
