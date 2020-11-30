#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char buffer[20];
    char *buffer2 = "This will be overwritten";
    printf("la version original buffer2 %s\n", buffer2);
    strcpy(buffer,argv[1]);
    printf("New buffer2: %s\n", buffer2);


    
    return 0;
}
