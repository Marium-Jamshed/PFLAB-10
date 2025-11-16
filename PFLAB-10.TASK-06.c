#include <stdio.h>

int main() {
    int n = 5, i, total = 0, maxIndex = 0;
    char names[5][100];
    int marks[5];

    // Input
    for(i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf(" %[^\n]", names[i]);
        printf("Enter marks of %s: ", names[i]);
        scanf("%d", &marks[i]);
        total += marks[i];
        if(marks[i] > marks[maxIndex]) maxIndex = i;  // Track top scorer
    }

    // Display table
    printf("\n%-20s Marks\n", "Student Name");
    for(i = 0; i < n; i++)
        printf("%-20s %d\n", names[i], marks[i]);

    // Output results
    printf("\nHighest scorer: %s with %d marks\n", names[maxIndex], marks[maxIndex]);
    printf("Class average: %.2f\n", (float)total / n);

    return 0;
}

