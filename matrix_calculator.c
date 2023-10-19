// code from borowed from:
// https://www.sanfoundry.com/c-program-perform-matrix-multiplication/
//
//
//

/* instructions:
Write a C program to emulate a matrix calculator.Your program must ...
Read in integers for two r x c matrices Aand B.Max size for both matrices is 10x10.
Read in integers for two r x c matrices Aand B.Max size for both matrices is 10x10.
Print matrix A and matrix B.
Loop the entire program until the user wants to quit.
Display menu to choose from add, subtract, scalar multiply, matrix multiply, transposeand determinant
Loop the menu until the user wants to quit.This allows us to choose more than one menu option on the original Aand B matrices.
If add is selected, calculateand print A + B or specific error if operation is not possible
If subtract is selected, calculateand print A - B or specific error if operation is not possible
If scalar multiply is selected, read in scalarand calculateand print scalar* Aand scalar* B
If matrix multiplication is selected, calculateand print A* B or specific error if operation is not possible
If transpose is selected, calculateand print A^ T or specific error if operation is not possible
If determinant is selected, calculateand print 2x2 or 3x3 determinants or specific error if operation is not possible

*/ 

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_RESET "\x1b[0m"

int main()
{
    int matrix1[10][10];
    int matrix2[10][10];
    int m1Rows = 0;
    int m1Colum = 0;
    int m2Rows = 0;
    int m2Colum = 0;
    char loopAgain;
    int i, j, k;
    int userChoice;
    int loopMenu;
    double multiplyer = 0;
    int answer[10][10];
    
    //Read in integers for two r x c matrices A and B.Max size for both matrices is 10x10.  

    do {
    printf("Lets set up two matrix tables, max 10x10 each. How many rows and columns do you want to create for the first table?\n");
    printf("Rows = ");
    scanf("%d", &m1Rows);
    printf("Columns = ");
    scanf("%d", &m1Colum);
    printf("\n");


    printf("How many rows and columns do you want to create for the second table? max 10\n");
    printf("Rows = ");
    scanf("%d", &m2Rows);
    printf("Columns = ");
    scanf("%d", &m2Colum);
    printf("\n");

        //scan in matrix 1
        for (i = 0; i < m1Rows; i++) {
            for (j = 0; j < m1Colum; j++) {
            printf("Enter values one at a time for Matrix #1\n");
            scanf("%d", &matrix1[i][j]);
            }
        }

         //scan in matrix 2
         for (i = 0; i < m2Rows; i++) {
            for (j = 0; j < m2Colum; j++) {
            printf("Enter values one at a time for Matrix #2\n");
            scanf("%d", &matrix2[i][j]);
            }
        }

         printf("\n");
         printf("Matrix Array 1\n");
            
         for (i = 0; i < m1Rows; i++) {
            for (j = 0; j < m1Colum; j++) {
                    printf("%5d", matrix1[i][j]);
            }
                printf("\n");
         }

          printf("\n");
          printf("Matrix Array 2\n");
            
          for (i = 0; i < m2Rows; i++) {
            for (j = 0; j < m2Colum; j++) {
                    printf("%5d", matrix2[i][j]);
            }
                printf("\n");
          }

          printf("Another table? y/n ");
          scanf(" %c", &loopAgain);
          loopAgain = tolower(loopAgain);
    } while (loopAgain == 'y');

    /*
        do {
            printf("\n\n\n");
            printf("M E N U\n");
            printf("1. Add A + B\n");
            printf("2. subtract\n");
            printf("3. scalar multiply\n");
            printf("4. matrix multiply\n");
            printf("5. transpose\n");
            printf("6. determinant\n");

        } while (loopMenu == 'y'); // end loop menue

        */

        return 0;
}



        /*

        //and now a menue
        printf("\nChoose an option: ");
        scanf("%d", &userChoice);
        
        switch (userChoice) {

        case 1:
            printf("Add\n");
            break;
        case 2:
            printf("Subtract\n");
            break;
        case 3:
            printf("scalar multiply, what is the value of the contant? \n");
            scanf("%d", &multiplyer);

            for (i=0; i < array1NumRows; i++);{
                for (j=0; array1numColum; j++); {

                    answer[i][j] = multiplyer* matrix1[i][j];

            

                }

            }

            for (i=0; i < array1NumRows; i++) {
                for (j=0; array1numColum; j++)  {
                    printf("%d/n", answer[i][j]);
                }
            }


        
            break;
        case 4:
            printf("matrix multiply\n");

            if (array1numColum != array2NumRows) {
                printf("Matriices cant be multiplied together");
                            }

                else {
                    for (i=0; j < array1NumRows; i++);
                        for (j=0; j < array2numColum; j++);
                            answer[i][j]=0;

                            for (k=0; k < array1numColum; k++);
                            answer[i][j] += matrix1[i][j] * matrix2[i][j];

                }

        
        

        
            break;
        case 5:
            printf("transpose\n");
            break;
        case 6:
            printf("determinant\n");
            break;
        }


        
        //else {
        //printf(ANSI_COLOR_RED);
        //printf("Error! Addition not possible. Matrices are not of the same size.\n");
        //printf(ANSI_COLOR_RESET);
        //}

        printf("Another menu Choice A and B y/n?:\n");
        scanf(" %d", &loopMenu);
        loopMenu = toupper(loopMenu);
        */