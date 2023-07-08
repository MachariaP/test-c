#include <stdio.h>

int main()
{
    int numberofdaysinJanuary = 31;
    int numberofdaysinFeburury = 30;
    int numberofdaysinMarch = 31;
    int numberofdaysinApril = 30;
    int numberofdaysinMay = 31;
    int numberofdaysinJune = 30;
    int numberofdaysinJuly = 31;
    int numberofdaysinAugust = 31;
    int numberofdaysinSeptember = 30;
    int numberofdaysinOctober = 31;
    int numberofdaysinNovember = 30;
    int numberofdaysinDecember = 31;

    int sumofQ1oftheyear = numberofdaysinJanuary + numberofdaysinFeburury + numberofdaysinMarch;
    int sumofQ2oftheyear = numberofdaysinApril + numberofdaysinMay + numberofdaysinJune;
    int sumofQ3oftheyear = numberofdaysinJuly + numberofdaysinAugust + numberofdaysinSeptember;
    int sumofQ4oftheyear = numberofdaysinOctober + numberofdaysinNovember + numberofdaysinDecember;

    printf("The sum of Q1 of the year is: %d\n", sumofQ1oftheyear);
    printf("The sum of Q2 of the year is: %d\n", sumofQ2oftheyear);
    printf("The sum of Q3 of the year is: %d\n", sumofQ3oftheyear);
    printf("The sum of Q4 of the year is: %d\n", sumofQ4oftheyear);

    return 0;

}
