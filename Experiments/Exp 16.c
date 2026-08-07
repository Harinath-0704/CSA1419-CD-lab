#include <stdio.h>

int main() {
    printf("Intermediate Code : t1 = a + b\n\n");

    printf("Target Code:\n");
    printf("MOV R1, a\n");
    printf("ADD R1, b\n");
    printf("MOV t1, R1\n");

    return 0;
}
