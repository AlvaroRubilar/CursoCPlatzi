#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[5];
    

    for (int i = 0; i < 5; i++)
    {
        array[i]=i*5;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("array(%d) = %d \n", i , array[i]);
    }
    
    
    
}