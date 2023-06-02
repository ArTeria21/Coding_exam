#include <stdio.h>
#include <stdlib.h> 

struct Coord {
	int x;
	int y;
};


int canGet(struct Coord start, struct Coord finish) {
    if ((abs(start.x - finish.x) == 2 && abs(start.y - finish.y) == 1) || (abs(start.x - finish.x) == 1 && abs(start.y - finish.y) == 2)) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    struct Coord start = {0, 0};
    struct Coord finish = {0, 2};

    printf("%d\n", canGet(start, finish));
    return 0;
}