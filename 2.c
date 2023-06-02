#include <stdio.h>

int exponentiate(int n, int degree) {
    int i, result = n;
    for (i=1; i<degree; i++) {
        result = result * n;
    }
    return result;
}

float sumFoo(int n) {
    int i;
    float result;
    for (i=1; i<=n; i++) {
        float num = exponentiate(i, i);
        float division = 1/num;
        result += division;
    }
    return result;
}

int main() {
    int n = 3;

    printf("%f\n", sumFoo(n));
    return 0;
}