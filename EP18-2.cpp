/*************************************************************************
	> File Name: EP18-2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月29日 星期日 15时09分11秒
 ************************************************************************/

#include <stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define MAX_N 15
int a[MAX_N + 5][MAX_N + 5] = {0};

int main() {
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j <= i; j++) {
            scanf("%d", a[i] + j);
        }
    }
    for (int i = 13; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            a[i][j] += max(a[i + 1][j], a[i + 1][j + 1]);
        }
    }
    printf("%d\n", a[0][0]);


    return 0;
}
