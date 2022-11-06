#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Please Enter Your name: ");
    char name[30];
    fgets(name,30,stdin);
    printf("Hello world, %s", name);

}
