#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bill.h"
int main(int argc, char *argv[]){
    //defined in bill.c
    time_t t;
    srand((unsigned) time(&t));
    double taxPercent = strtod(argv[1], NULL) / 100;
    double tipPercent = strtod(argv[2], NULL) / 100;
    int randomNum = rand() % 4;
    double calculateTax(const MealItem table[], double taxPercent, int randomNum);
    double calculateTip(const MealItem table[], double tipPercent, int randomNum);
    double getMealCost(const MealItem table[], int randomNum);

    //defined in billTable.c
    extern MealItem MealTable[];
    
    if (argc == 3 && taxPercent < .99 && tipPercent < .99) {
        printf("The values supplied are tax: %.2f and tip: %.2f\n", taxPercent, tipPercent);
    } else if (taxPercent > .99 || tipPercent > .99) {
        printf("Please keep both values under 100.");
    } else
        printf("Please enter just two values, 1st one for tax, 2nd one for tip.\n");
    
    double taxBill = calculateTax(MealTable, taxPercent, randomNum);
    double tipBill = calculateTip(MealTable, tipPercent, randomNum);
    double mealCost = getMealCost(MealTable, randomNum);
    double totalBill = taxBill + tipBill + mealCost;

    printf("The bill is:\nMeal Cost: $%.2f\nTax Amount: $%.2f\nTip Amount: $%.2f\nTotal Bill: $%.2f\n", 
                mealCost, taxBill, tipBill, totalBill);

    return EXIT_SUCCESS;
}