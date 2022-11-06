#include <stdio.h>


#include <stdlib.h>
int main()
{



    //Program to take in 10 names from the user and display it


    char students[30][20]; //A two dimensional array was needed to house the string since the strings are also array(collection of characters)


    //The for loop will enable the the user to input the names repetitively 10 times
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the names: ");
        fgets(students[i],20,stdin);
        printf("\n");

    }


    printf(" \n");

    printf("THE NAME OF THE STUDENTS COLLECTED ARE : \n");
    //this for loop will print out each element in the two dimensional string by accesing it via the index value
    for(int j=0; j<10;j++){
        printf("%s \n", students[j]);
    }

    return 0;



}
