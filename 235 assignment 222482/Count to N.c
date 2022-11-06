#include <stdio.h>

#include <string.h>

int main()
{
    while(1<3)
    {

        int num;

        //The user enters the number he/she wants to count to

        printf("Enter the number you want to count to: ");
        scanf("%d", &num);
        int i=1;

        //Then we loop until we get to the number
        while(i<=num)
        {
            printf("%d \n", i);
            i++;
        }
    }


    return 0;

}
