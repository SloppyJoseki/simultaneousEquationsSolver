#define _CRT_SECURE_NO_WARNINGS

#include "simultaneousEquationsFunctions.h"

int main()
{
    acceptMatrix2by2(xyMultiples);
    acceptMatrix2by1(totals);

    printMatrix2by2(xyMultiples);
    printMatrix2by1(totals);

    calculateDeterminant();
    calculateAlteredMatrix();
    calculateInverseMatrix();
    calculateAnswerMatrix();

    return 0;
}
