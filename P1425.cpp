/*************************************************************************
	> File Name: P1425.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月14日 星期二 11时42分07秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int a, b, c, d, sum1, sum2;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    sum1 = a * 60 + b;
    sum2 = c * 60 + d;
    printf("%d %d\n", (sum2 - sum1) / 60, (sum2 - sum1) % 60);


    return 0;
}
