#include <stdio.h>

int main(){

    int number = 5;
    int * pointToNumber = &number;
    printf("%p direccion de memoria  %d valor de la variable\n",pointToNumber, *pointToNumber );




}
