#include <stdio.h>

int main() {
     int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    int totalDrinks = (k * l) / nl;//1000 / 10 = 100
    int totalSlices = c * d;//80
    int totalSalt = p / np;//100 / 2 = 50

    int ans = (totalDrinks < totalSlices ? totalDrinks : totalSlices);
    ans = (ans < totalSalt ? ans : totalSalt);
    ans /= n;//50 /4 =12

    printf("%d\n", ans);
    return 0;
}

