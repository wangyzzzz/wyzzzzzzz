/*************************************************************************
	> File Name: EP20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月30日 星期一 10时36分57秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 100

int Factorial[500] = {1, 1};

int main() {
    for (int i = MAX_N; i >= 2; i--) {
        for (int j = 1; j <= Factorial[0]; j++) {
            if (!Factorial[j]) continue;
            Factorial[j] = Factorial[j] * i;
        }
        for (int j = 1; j <= Factorial[0]; j++) {
            if (Factorial[j] < 10) continue;
            Factorial[j + 1] += Factorial[j] / 10;
            Factorial[j] %= 10;
            Factorial[0] += (j == Factorial[0]);
        }
    }
    int ans = 0;
    for (int i = 1; i <= Factorial[0]; i++) {
        printf("%d ",Factorial[i]);
        ans += Factorial[i];
    }
    printf("%d\n", ans);
    return 0;
}
