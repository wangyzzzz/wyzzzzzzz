/*************************************************************************
	> File Name: EP24.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月07日 星期二 10时10分04秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#define MAX_N 1000000

int Factorial[10] = {0};
int num[10] = {0};

void get_factorial() {
    Factorial[0] = 1;
    for (int i = 1; i <= 9; i++) 
    Factorial[i] = i * Factorial[i - 1];
}

int get_num(int x, int n) {
    int a = x / Factorial[n] + 1;
    int i = 0, j = -1;
    do {
        j++;
        i += (1 - num[j]);
    } while (i < a);
    num[j] = 1;
    return j;
}

int main() {
    int x = MAX_N - 1;
    int64_t ans = 0;
    get_factorial();
    for (int i = 9; i >= 0; i--) {
        ans = ans * 10 + get_num(x, i);
        x %= Factorial[i];
    }
    printf("%" PRId64 "\n", ans);
    return 0;
}
