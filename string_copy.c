#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char * src = "Alvaro";
    char des[20] = "No veras esto nunca";
    strcpy(des,src);
    printf("des = %s\n",des);
    return 0;
}
