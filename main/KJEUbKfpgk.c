#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100
void reverse(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}
int main() {
    char str[MAX_SIZE];
    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);
    str[strcspn(str, "\n")] = 0;
    reverse(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
