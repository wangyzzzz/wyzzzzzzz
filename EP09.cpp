/*************************************************************************
	> File Name: EP09.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月30日 星期一 16时59分55秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
int gcd(int a, int b) {
    return b ?(gcd(b, a%b)) : a;
}

int main() {
    int a, b, c, d;
    for (int i = 1; i < 32; i++) {
        for (int j = i + 1; j < 32; j++) {
            if(gcd(j, i) != 1) continue;
            a = 2 * i * j;
            b = j * j - i * i;
            c = j * j + i * i;
            if (1000 % (a + b + c) == 0) {
                d = pow(1000 / (a + b + c), 3);
                printf("%d\n", d * a * b * c);
            }
        }
    }
}
