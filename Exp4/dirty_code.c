#include <stdio.h>
#include <string.h>

int main(void) {
    char name[10];

    strcpy(name, "Alexander");

    int marks = 75;

    if (marks > 50) {
        if (marks < 100) {
            if (marks == 75) {
                printf("Excellent\n");
            }
        }
    }

    if (0) {
        printf("Dead code\n");
    }

    FILE *fp = fopen("student.txt", "w");
    fprintf(fp, "%s %d\n", name, marks);

    fclose(fp);

    return 0;
}
