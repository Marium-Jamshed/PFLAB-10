#include <stdio.h>

int main() {
    // 1. Store menu categories
    char categories[3][20] = {"Appetizers", "Main Course", "Desserts"};

    // 2. Store items for each category
    char items[3][3][20] = {
        {"Spring Roll", "Garlic Bread", "Salad"},    // Appetizers
        {"Burger", "Pizza", "Pasta"},                // Main Course
        {"Ice Cream", "Cake", "Fruit Salad"}         // Desserts
    };

    // 3. Store prices for each item
    float prices[3][3] = {
        {5.5, 6.0, 4.5},     // Appetizers
        {12.0, 15.0, 11.0},  // Main Course
        {3.5, 4.0, 6.5}      // Desserts
    };

    int i, j;

    // 4. Display the complete menu
    printf("----- MENU -----\n");
    for(i = 0; i < 3; i++) {
        printf("\n%s:\n", categories[i]); // Print category name
        for(j = 0; j < 3; j++) {
            printf("  %s - $%.2f\n", items[i][j], prices[i][j]); // Print item and price
        }
    }

    // 5. Show budget-friendly options (<$10)
    printf("\nBudget-friendly items (under $10):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(prices[i][j] < 10) { // Check if price is less than $10
                printf("%s (%s) - $%.2f\n", items[i][j], categories[i], prices[i][j]);
            }
        }
    }

    return 0;
}

