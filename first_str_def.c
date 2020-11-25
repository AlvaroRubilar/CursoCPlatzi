#include <stdio.h>

int main(int argc, char const *argv[])
{
    char * name = "Alvaro";
    printf("nombre = %s %p \n",name,name);
    for (int i = 0; i < 6; i++)
    {
       printf("name[%d](%p) = %c\n",i,name +i,*(name+i));
    }
    
    return 0;
}
