// code borrowed from...
// https://www.sanfoundry.com/c-program-perform-matrix-multiplication/
//https://www.geeksforgeeks.org/c-transpose-matrix/
//
//https://github.com/drewphillips/matrix_calulator.c

/* instructions:
Write a C program to emulate a matrix calculator.Your program must ...
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
    int multiplyer = 0;
    int answer[10][10];
    int outputMatrix[10][10];
    int transM1[m1Rows][m1Colum];
    int transM2[3][3];
    int trans1Rows;
    int trans1colum;
    int determTotal1;
    int determTotal2;

    
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

         //Print matrix A and matrix B.

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
    


          //Display menu to choose from add, subtract, scalar multiply, matrix multiply, transposeand determinant
          do {
                printf("\n\n\n");
                printf("M E N U\n");
                printf("1. Add Matrix 1 + Matrix 2\n");
                printf("2. Subtract Matrix 1 + Matrix 2\n");
                printf("3. Scalar multiply Matrix 1 & Matrix 2 * a Constant Variable\n");
                printf("4. Matrix multiplyMatrix 1 + Matrix 2\n");
                printf("5. Transpose Matrix 1 + Matrix 2\n");
                printf("6. Determinant Matrix 1 + Matrix 2\n");

                //and now a menue
                printf("\nChoose an option: ");
                scanf("%d", &userChoice);

                switch (userChoice) {

                    //If add is selected, calculateand print A + B or specific error if operation is not possible
                    case 1:
                    printf("Add Matrix 1 and 2\n");
                    printf("\n");

                    if ((m1Rows == m2Rows) && (m1Colum == m2Colum)) {
                        for (i = 0; i < m1Rows; i++) {
                            for (j = 0; j < m1Colum; j++) {
                                answer[i][j] = matrix1[i][j] + matrix2[i][j];
                            }
                        }

                        for (i = 0; i < m1Rows; i++) {
                            for (j = 0; j < m1Colum; j++) {
                                printf("%d ", answer[i][j]);
                            }
                            printf("\n");
                        }
                    }
                    else {
                        printf("\n");
                        printf(ANSI_COLOR_RED);
                        printf("ERROR! Matrices must be the same size to add together.");
                        printf(ANSI_COLOR_RESET);
                        printf("\n");
                    }

                    break;

                    //If subtract is selected, calculateand print A - B or specific error if operation is not possible
                    case 2:
                    printf("Subtract Matrix 1 from Matrix 2\n");
                    printf("\n");

                    if ((m1Rows == m2Rows) && (m1Colum == m2Colum)) {
                        for (i = 0; i < m1Rows; i++) {
                            for (j = 0; j < m1Colum; j++) {
                                answer[i][j] = matrix1[i][j] - matrix2[i][j];
                            }
                        }

                        for (i = 0; i < m1Rows; i++) {
                            for (j = 0; j < m1Colum; j++) {
                                printf("%d ", answer[i][j]);
                            }
                            printf("\n");
                        }
                    }
                    else {
                        printf("\n");
                        printf(ANSI_COLOR_RED);
                        printf("ERROR! Matrices must be the same size to subtract.");
                        printf(ANSI_COLOR_RESET);
                        printf("\n");
                    }

                    break;

                    //If scalar multiply is selected, read in scalarand calculateand print scalar* A and scalar* B
                    case 3:

                    printf("Scalar Multiply");
                    printf("scalar multiply, what is the value of the constant to multipy by? \n");
                    scanf("%d", &multiplyer);
                    printf("You entered %d\n", multiplyer);

                    for (i = 0; i < m1Rows; i++) {
                        for (j = 0; j < m1Colum; j++) {
                            answer[i][j] = multiplyer * matrix1[i][j];
                        }

                    }

                    printf("Multiplied Matrix 1 by Constant = \n");
                    for (i = 0; i < m1Rows; i++) {
                        printf("\n");
                        for (j = 0; j < m1Colum; j++) {
                            printf("%d ", answer[i][j]);
                        }
                    }

                    // calulate martix 2

                    for (i = 0; i < m2Rows; i++) {
                        for (j = 0; j < m2Colum; j++) {
                            answer[i][j] = multiplyer * matrix2[i][j];
                        }

                    }

                    printf("\n");
                    printf("\nMultiplied Matrix 2 by constant =\n");
                    for (i = 0; i < m2Rows; i++) {
                        printf("\n");
                        for (j = 0; j < m2Colum; j++) {
                            printf("%d ", answer[i][j]);
                        }
                    }
                    printf("\n");
                    printf("\n");

                    break;

                    //If matrix multiplication is selected, calculateand print A* B or specific error if operation is not possible
                    case 4:
                    printf("matrix multiply\n");
                    /*
                    outputMatrix[i][j] = 0;

                    if (m1Colum != m2Rows)  {
                        printf(ANSI_COLOR_RED);
                        printf("\n");
                        printf("Matriices cant be multiplied together\n");
                        printf(ANSI_COLOR_RESET);
                           }

                    else {
                        for (i = 0; i < m1Rows; i++) {
                            for (j = 0; j < m2Colum; j++) {

                            }

                            for (k = 0; k < m1Rows; k++) {
                                for (l = 0; l < m2Colum; l++) {


                                    outputMatrix[i][j] += matrix1[i][j] * matrix2[k][k] + matrix1[i][j] * matrix2[k][k];
                                }

                            }
                        }
                    }

                    printf("Multiplied matrix\n");
                    for (int i = 0; i < m1Rows; i++) {
                        for (int j = 0; j < m2Colum; j++) {
                            printf("\n");
                            printf("%d\t", outputMatrix[i][j]);
                        }
                    }

                        printf("\n");
                        printf("\n");
                       */
                    break;
                    //If transpose is selected, calculateand print A^ T or specific error if operation is not possible
                    case 5:
                    printf("Transpose\n");

                    /*


                   // if (trans1Rows = m1Rows && trans1colum = m1Colum) {



                   // trans1Rows = m1Rows;
                    //trans1colum = m1Colum;

                    for (i = 0; i < m1Rows; i++) {
                        transM1[i] = matrix1[i][j];

                        // for (j = 0; j < m1Colum; j++) {
                            transM1[j][i] = matrix1[i][j];
                        }
                    }

                    for (i = 0; i < trans1Rows; i++) {
                        for (j = 0; j < trans1colum; j++) {
                            printf("%d ", transM1[i][j]);
                        }
                    }

                    //for (i = 0; i < trans1Rows; i++) {
                        //for (j = 0; j < trans1colum; j++);
                        //printf("%d", transM1[i][j]);
                    //}

                    /*
                    else {
                        printf("\n");
                        printf(ANSI_COLOR_RED);
                        printf("ERROR! Matrixes are not the saem, more compleax code is needed, FEXME!");
                        printf(ANSI_COLOR_RESET);
                        printf("\n");

                    }
                    }
                    */
                    break;
                    //If determinant is selected, calculateand print 2x2 or 3x3 determinants or specific error if operation is not possible
                    case 6:
                    printf("Determinant\n");
                    printf("\n");

                    //error reporting
                    if (m1Rows != m1Colum) {
                        printf("\n");
                        printf(ANSI_COLOR_RED);
                        printf("ERROR! Matrices 1 must be square to find the determinant\n");
                        printf(ANSI_COLOR_RESET);
                        printf("\n");
                    }

                    else if (m2Rows != m2Colum) {
                        printf("\n");
                        printf(ANSI_COLOR_RED);
                        printf("ERROR! Matrices 2 must be square to find the determinant\n");
                        printf(ANSI_COLOR_RESET);
                        printf("\n");
                    }

                    

                     // 2x2 simple math
                    else if (m1Rows == 2 && m1Colum == 2 && m2Rows == 2 && m2Colum == 2) {
                            determTotal1 = matrix1[0][0] * matrix1[1][1] - matrix1[1][0] * matrix1[0][1];
                            printf("Matrix 1 = %d\n", determTotal1);

                            determTotal2 = matrix2[0][0] * matrix2[1][1] - matrix2[1][0] * matrix2[0][1];
                            printf("Martix 2 = %d", determTotal2);

                            printf("\n");
                     }

                    
            
                       printf("\n");

                        // else if 3x3 ...
                        //3x3 complex math, with changed starting points. and vaules added to element 3 and 4 from 0 and 2. 
                        /* else if (m1Rows == 3) && m2Colum == 3) {
                        (i = 0; i < m1Rows; i++);
                        (i = 1; i < m2Colum; i--);
                        }

                        */


                
                        break;
                    
                    // print a red error warning if 1 - 6 is not selected.
                    default:
                    printf(ANSI_COLOR_RED);
                    printf("Invalid option, please select 1 - 6 only\n");
                    printf(ANSI_COLOR_RESET);

                }
                                
          } while (loopMenu == 'y'); // end loop menue
            
        //Loop the entire program until the user wants to quit.
        
        printf("Set up two more Matrixes? y/n ");
        scanf(" %c", &loopAgain);
        loopAgain = tolower(loopAgain);
     
    } while (loopAgain == 'y');

        return 0;
}