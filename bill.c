#include <string.h>
#include "bill.h"
double calculateTax(PtrToConstMealItem ptr, double tax, int num){
    double mealCost = ptr[num].cost;
    double taxAmount;
    taxAmount = mealCost * tax;
    return taxAmount;
}
double calculateTip(PtrToConstMealItem ptr, double tip, int num){
    double mealCost = ptr[num].cost;
    double tipAmount;
    tipAmount = mealCost * tip;
    return tipAmount;
}
double getMealCost(PtrToConstMealItem ptr, int num){
    return ptr[num].cost;
}