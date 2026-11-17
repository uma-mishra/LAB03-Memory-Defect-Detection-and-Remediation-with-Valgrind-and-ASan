#include <stdio.h>

#define MAX_NAME 50

int main(void) {
    const char name[MAX_NAME] = "Alexander";
    const int marks = 75;

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
