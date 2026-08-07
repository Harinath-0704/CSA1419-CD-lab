#include <stdio.h>
#include <string.h>

char input[20];
int i = 0;

void E();
void E1();
void T();
void T1();
void F();

void E() { T(); E1(); }

void E1() {
    if(input[i] == '+') {
        i++;
        T();
        E1();
    }
}

void T() { F(); T1(); }

void T1() {
    if(input[i] == '*') {
        i++;
        F();
        T1();
    }
}

void F() {
    if(input[i] == 'i')
        i++;
}

int main() {
    printf("Enter expression (use i for id): ");
    scanf("%s", input);

    E();

    if(input[i] == '\0')
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
