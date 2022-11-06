//PROGRAM TO CALCULATE THE ROOT OF A QUADRACTIC EQUATION


#include <stdio.h>
#include <stdlib.h>


int main()
{


    //create an infinite loop to keep on solving Quadractic equation
    while(2<5)
    {
        double a,b,c;

        //the coefficient of X^2, X and the constant of equation is to be supplied by the user
        printf("Enter the coefficient of X^2: ");
        scanf("%lf",&a);
        printf("Enter the coefficient of X: ");
        scanf("%lf",&b);
        printf("Enter the Constant: ");
        scanf("%lf",&c);


        //The determinant is then calculated to determine if the root is of complex solution or not
        double det = pow(b,2)-(4*a*c);

        //Employ the Quadratic formula to solve for the roots
        float root1= (-b + sqrt(det))/(2*a);
        float root2= (-b - sqrt(det))/(2*a);

        if(det>0)
        {
           printf("The two roots are %f and %f\n", root1,root2);
        }

        else if(det==0)
        {
            printf("The roots are equal, which is: %f  and %f\n", root1,root2);
        }

        else
        {
            printf("The roots are of Complex Solutions\n");
        }

        printf("Done\n");

        printf(" \n");

        printf(" \n");
    }


        return 0;


}
