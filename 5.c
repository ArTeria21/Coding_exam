#include <stdio.h>

struct PC {
    char* name;
    int price;
	int RAM;
};

struct PC* cheapestPC(struct University data[], int n) {
    struct PC* min = &data[0].pc;

    for (int i = 1; i < n; i++) {
        if (data[i].price < min->price || (data[i].price == min->price && data[i].RAM < min->RAM)) {
            min = &data[i];
        }
    }
    return min;
}

// Надеюсь, оно работает)) Не успеваю написать проверку
// int main() {

// }