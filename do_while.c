#include<stdio.h>


int main()
{
    int n = 1, acum = 10;

    do {
        acum += n;
        n++;
        
    } while (n < 10);
    printf("%d",acum); 


}
