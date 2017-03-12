#include <stdio.h>

typedef union
{
    int Integer;
    char Character;
} OneThingOrAnother;

typedef enum {
    TheInteger,
    TheCharacter
}WhichThing;

int main()
{
    OneThingOrAnother var;
    var.Integer =123;
    var.Character ='A';


    WhichThing type = TheInteger;

    printf("var %d type=%d\n", var.Integer, type);

    return 0;
}