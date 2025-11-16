#include <stdio.h>
#include <string.h>

int main() {
    char students[4][20] = {"Alice", "Bob", "Charlie", "Diana"};
    char courses[4][5][20] = {
        {"Math","Physics","Chemistry"},
        {"English","Biology"},
        {"Math","Physics","Chemistry","CS"},
        {"History"}
    };
    int courseCount[4] = {3,2,4,1};
    int i, j;

    // Show each student's courses
    printf("Student Courses:\n");
    for(i=0;i<4;i++){
        printf("%s: ", students[i]);
        for(j=0;j<courseCount[i];j++) printf("%s ", courses[i][j]);
        printf("\n");
    }

    // Students taking Physics
    printf("\nStudents taking Physics:\n");
    for(i=0;i<4;i++)
        for(j=0;j<courseCount[i];j++)
            if(strcmp(courses[i][j],"Physics")==0){
                printf("%s\n", students[i]);
                break;
            }

    // Overloaded students (>3 courses)
    printf("\nOverloaded students:\n");
    for(i=0;i<4;i++)
        if(courseCount[i]>3) printf("%s\n", students[i]);

    return 0;
}

