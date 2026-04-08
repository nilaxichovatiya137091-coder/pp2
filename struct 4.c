#include <stdio.h>

#define MAX 100

struct Student {
    char name[50];
    float grade;
};

void printAboveFive(struct Student students[], int n) {
    printf("Students with grade greater than 5.0:\n");

    for (int i = 0; i < n; i++) {
        if (students[i].grade > 5.0) {
            printf("%s\n", students[i].name);
        }
    }
}

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[MAX];

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter grade: ");
        scanf("%f", &students[i].grade);
    }

    printf("\n");
    printAboveFive(students, n);

    retur\
