#include <stdio.h>
#include <string.h>

int count(char str[], char letter) {
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        if (str[i] == letter) {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    char str[] = "Hello, world!";
    char letter = 'l';

    printf("%d\n", count(str, letter));
    return 0;
}