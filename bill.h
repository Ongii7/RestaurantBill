#include <stdio.h>
#include <stddef.h>
typedef struct {
    char *item;
    double cost;
} MealItem, *PtrToMealItem;
typedef const MealItem *PtrToConstMealItem;