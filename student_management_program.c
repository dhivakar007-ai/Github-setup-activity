#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s[3];
    int i;
    float total = 0, average;

    // Input details
    for(i = 0; i < 3; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        
        printf("Enter ID: ");
        scanf("%d", &s[i].id);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);

        total += s[i].marks;
    }

    // Calculate average
    average = total / 3;

    // Display details
    printf("\n--- Student Details ---\n");
    for(i = 0; i < 3; i++) {
        printf("\nID: %d", s[i].id);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }

    printf("\nAverage Marks = %.2f\n", average);

    return 0;
}
