/*************************************************************************
	> File Name: P1085.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月14日 星期二 11时59分37秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int a, b, n = 7, max = 0, ans;

    while (n) {
        scanf("%d %d", &a, &b);
        int temp = a + b;
        if (temp > max) {
            max = temp;
            ans = 8 - n;
        }
        n--;
    }
    printf("%d\n", ans);

    return 0;
}
