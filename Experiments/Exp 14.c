#include <stdio.h>

int main() {
    char a, b, c, d;

    printf("Enter expression (a+b*c): ");
    scanf("%c+%c*%c", &a, &b, &c);

    printf("\nThree Address Code:\n");
    printf("t1 = %c * %c\n", b, c);
    printf("t2 = %c + t1\n", a);
    printf("Result = t2\n");

    return 0;
}
