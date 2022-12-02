#include <stdio.h>
#include <stdlib.h>
#include "globalVariables.h"


void acceptMatrix2by2(float matrix[SIZE][SIZE])
{
    int row;
    int col;
    printf("Please enter your first x value followed by your first y value then second x value and second y value\n");
    for (row = 0; row < 2; row++)
    {
        for (col = 0; col < 2; col++)
        {
            scanf("%f", &matrix[row][col]);
        }
    }

}

void acceptMatrix2by1(float matrix[SIZE][SIZE - 1])
{
    int row;
    int col;
    printf("Please now enter the two values given after the = sign\n");
    for (row = 0; row < 2; row++)
    {
        for (col = 0; col < 1; col++)
        {
            scanf("%f", &matrix[row][col]);
        }
    }
}

void printMatrix2by2(float matrix[SIZE][SIZE])
{
    int row;
    int col;
    printf("Your 2*2 matrix is:\n");
    for (row = 0; row < 2; row++)
    {
        for (col = 0; col < 2; col++)
        {
            printf(" %1.f ", matrix[row][col]);
        }
        printf("\n");
    }
}

void printMatrix2by1(float matrix[SIZE][SIZE - 1])
{
    int row;
    int col;
    printf("Your 2*1 matrix is:\n");
    for (row = 0; row < 2; row++)
    {
        for (col = 0; col < 1; col++)
        {
            printf(" %1.f ", matrix[row][col]);
        }
        printf("\n");
    }
}

float calculateDeterminant()
{
    determinant = (xyMultiples[0][0] * xyMultiples[1][1]) - (xyMultiples[0][1] * xyMultiples[1][0]);
    printf("%f is the determinant\n", determinant);
    return determinant;
}

void calculateAlteredMatrix()
{
    alteredMatrix[0][0] = xyMultiples[1][1];
    alteredMatrix[0][1] = xyMultiples[0][1] * -1;
    alteredMatrix[1][0] = xyMultiples[1][0] * -1;
    alteredMatrix[1][1] = xyMultiples[0][0];

    printMatrix2by2(alteredMatrix);
    return alteredMatrix;
}

void calculateInverseMatrix()
{

    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            inverseMatrix[row][col] = (1 / determinant) * alteredMatrix[row][col];
        }
    }
    printMatrix2by2(inverseMatrix);
}

void calculateAnswerMatrix()
{

    answerMatrix[0][0] = (inverseMatrix[0][0] * totals[0][0]) + (inverseMatrix[0][1] * totals[1][0]);
    answerMatrix[1][0] = (inverseMatrix[1][0] * totals[0][0]) + (inverseMatrix[1][1] * totals[1][0]);

    printf("The x value is the first value in the resultant matrix and they y value is the second:\n");
    printMatrix2by1(answerMatrix);
}