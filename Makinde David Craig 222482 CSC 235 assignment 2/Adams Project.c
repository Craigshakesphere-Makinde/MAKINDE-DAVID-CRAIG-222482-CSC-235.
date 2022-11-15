#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
int count1;

int main()
{
    char text[30];
    //Create a loop to to check if the name of file entered by the user
    while(true)
    {
        printf("Enter The name of the file to be read: ");
        scanf("%s", &text);
        FILE*checkFile;
        checkFile=fopen(text, "r");
        if(checkFile==NULL)
        {
            printf("%s does not exist\n", text);
            printf("Make Sure the name of the file exist\n");
            NewLineSpacing();
        }
        else
        {
            break;
        }
    }
    DetermineSteps(text);

    return 0;
}

//This function prints "*********************" on a line
void NewLineSpacing()
{
    for(int c=0; c<30; c++)
    {
        printf("*");

    }
    printf("\n");

}


//This function checks the amount of steps taken until the person falls(D)

int Check(char info[])
{
    int counting=0;
    for(int p=0; p<strlen(info); p++)
    {
        if(info[p]!='D')
        {
            counting++;
        }
    }
    return counting;

}


//This is the function that reads the file
void DetermineSteps(char value[])
{

    //the file was opened and read
    FILE*walkInputs;
    walkInputs=fopen(value, "r");


    int numCaseFiles;


    fscanf(walkInputs, "%d", &numCaseFiles);

    char container[numCaseFiles][100];
    int counter[50];

    for(int count=0;count<numCaseFiles;count++)
    {

        fscanf(walkInputs, "%s", container[count]);


        //After each string had been taken, it is then converted to capital letters to enable coherency and validity when comparing, should in case the user enters a capital or small letter
        for(int count2=0;count2<strlen(container[count]); count2++)
        {
            container[count][count2]= toupper(container[count][count2]);
        }


    }
    fclose(walkInputs);
    //A nested for loop is then created to enable us access each individual character to determine when the hand was down(D}


    for(int count3=0;count3<numCaseFiles;count3++)
    {
        int point= Check(container[count3]);
        if(point!=0)
        {
            counter[count3]=point;
            continue;

        }


        for(int count4=0; count4<strlen(container[count3]);count4++)
        {
            if(container[count3][count4]!='D')
            {
                count1++;
                continue;
            }
            else
            {
                counter[count3]=count1;
                count1=0;
                break;
            }

        }

    }

    //This loop print each case and the respective steps taken before a fall

    for(int count5=0; count5<numCaseFiles;count5++)
    {
        printf(" Case %d:      %s--     %d\n",count5+1, container[count5], counter[count5]);

    }



}
