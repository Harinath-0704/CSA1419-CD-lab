#include <stdio.h>
#include <string.h>

struct Symbol {
    char name[20];
    int address;
};

int main() {
    struct Symbol table[10];
    int n, i;

    printf("Enter number of symbols: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter symbol name: ");
        scanf("%s", table[i].name);
        table[i].address = 100 + i * 4;
    }

    printf("\nSymbol Table\n");
    printf("Name\tAddress\n");
    for(i = 0; i < n; i++)
        printf("%s\t%d\n", table[i].name, table[i].address);

    return 0;
}
