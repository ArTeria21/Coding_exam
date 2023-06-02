#include <stdio.h>

int main() {
    int f_max=0, s_max=0, n, f=1;

    while(f==1) {
        scanf("%d", &n);

        if (n==0) {
            break;
        }

        if (n % 2 == 0 && n > f_max) {
            s_max = f_max; // сохраняем предыдущий максимум вторым
            f_max = n;
        } else if (n % 2 == 0 && n > s_max && n < f_max) {
            s_max = n;
        }
    }

    printf("%d\n",s_max);
    return 0;
}
