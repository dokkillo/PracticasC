#include <stdio.h>


int main()
{
    int i=1234;

    int *p =0;

    p=&i;

    int j = *p;

    *p=4599;

    printf("i = %d\n j = %d \n", i,j);


//ARRAYS Y PUNTEROS

int numbers[3] ={101,202,303};
int size = sizeof(numbers)/sizeof(numbers[0]);

int *p1= numbers;
int *end = numbers + size;

for(; p1!= end;++p1)
{
    printf("%d\n", *p1);
}

}