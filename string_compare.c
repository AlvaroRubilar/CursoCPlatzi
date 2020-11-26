#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char * name = "Alvaro";
    char * otherName = "Juan";
    printf("Los nombres son %s\n ",strcmp(name, otherName)== 0? "iguales":"distintos" );
    return 0;
}
