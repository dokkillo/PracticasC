#include <stdio.h>
#include <stdlib.h>
#include "list.h"


void list_init(list *container);
bool  list_empty(list *container);
void list_push_back(list *container, list_element *element);
list_element * list_pop_front(list *container);


typedef struct
{
    list_element header;
    int value;
}apple;

int main()
{   

    list apples;
    apple *a =  (apple *) malloc(sizeof(apple));
    apple *b =  (apple *) malloc(sizeof(apple));
    apple *c =  (apple *) malloc(sizeof(apple));

    a->value=1;
    b->value=2;
    c->value=3;

    list_init(&apples);
    
    list_push_back(&apples,&a->header);
    list_push_back(&apples,&b->header);
    list_push_back(&apples,&c->header);

    for(a =(apple *) list_begin(&apples); a ;a=(apple *)list_next(&a->header))
    {
        printf("%d\n", a->value);
    }

    while(!list_empty(&apples))
    {
        a = (apple*) list_pop_front(&apples);
        free(a);
    }
       return 0;
}