
#include <stdio.h>

#define MAX_NAME 50
#define PASS_MARKS 50
#define MAX_MARKS 100
#define EXCELLENT_MARKS 75

int main(void) {
    const char name[MAX_NAME] = "Alexander Mishra";
    const int marks = EXCELLENT_MARKS;

    printf("Excellent\n");

    FILE *fp = fopen("student.txt", "w");

    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    if (fprintf(fp, "%s %d\n", name, marks) < 0) {
        perror("Error writing file");
        fclose(fp);
        return 1;
    }

    if (fclose(fp) == EOF) {
        perror("Error closing file");
        return 1;
    }

    return 0;
}
