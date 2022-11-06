
//PROGRAM TO REVERSE A SENTENCE


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char text[10];

    //The user will input the text he/she wants to be reversed
    printf("Enter The Text to be reversed: ");
    fgets(text,10,stdin);
    printf("The Text Entered is: %s\n", text);
    printf("The reversed form is: " );

    //Then a for loop is created and each individual character is accesed through the index, but this time, it's from the length of the string to zero
    for(int i=sizeof(text);i>=0; i--)
    {
        printf("%c", text[i]);

    }

}
