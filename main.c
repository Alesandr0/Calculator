#include <stdio.h>
#include <stdlib.h>


int checks_number(){     // Function that verifies that the user has entered a number and validates if it is true
    double retorno = -1, option;
    char letra;
    do{
        if (retorno==0)
            printf ("You typed a letter!!\n");
        printf ("Enter a number\n");
        retorno = scanf("%lf",&option);
        do{
            letra = getchar();
        }while (letra!= '\n');
    }while (retorno==0);
    return option;
}

int main(){
    char name[30];
    double numberOne, numberTwo, result, option;
    printf("Welcome to the calculator program!\n");
    printf ("What's your name?\n");
    gets(name);
    printf (" 1- shut down\n 2- Sum\n 3- Subtraction \n 4- Division\n");
    option = checks_number();
    do{
        if (option==2){    // Make sum
            numberOne = checks_number();
            numberTwo = checks_number ();
            result = numberOne + numberTwo;
            do{
                printf ("would like to continue the sum?\n 1- Not  (any number)- Yes\n");
                option = checks_number ();
                if (option==1){
                    printf ("\n Sum of the numbers is: %.2lf\n",result);
                }
                else {
                    numberOne = checks_number();
                    result+= numberOne;
                }
            }while(option!=1);

        }
        else if (option==3){  // Make Subtraction
            numberOne = checks_number();
            numberTwo = checks_number ();
            result = numberOne - numberTwo;
            do{
                printf ("would like to continue the Subtraction?\n 1- Not  (any number)- Yes\n");
                option = checks_number ();
                if (option==1){
                    printf ("\n Subtraction of the numbers is: %.2lf\n",result);
                }
                else {
                    numberOne = checks_number();
                    result-= numberOne;
                }
            }while(option!=1);


        }
        else if (option==4){
         numberOne = checks_number ();
         printf ("It will divide by how much?\n");
         numberTwo = checks_number ();
         result = numberOne/numberTwo;
         printf ("\n Division of the numbers is: %.2lf\n",result);
        }
        printf ("\n 1- shut down\n 2- Sum\n 3- Subtraction \n 4- Division\n");
        option = checks_number();
    }while (option!=1);
    printf ("n\ Welcome %s", name);
    return 0;
}
