/*************************************************************************
	> File Name: P1008.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月14日 星期二 13时35分44秒
 ************************************************************************/

#include <stdio.h>
#include <algorithm>
using namespace std;

int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

void is_valid(int *n) {
    int num1 = n[0] * 100 + n[1] * 10 + n[2];
    int num2 = n[3] * 100 + n[4] * 10 + n[5];
    int num3 = n[6] * 100 + n[7] * 10 + n[8];
    if (num1 * 2 == num2 && num1 * 3 == num3) 
    printf("%d %d %d\n", num1, num2, num3);
    
    
}

int main() {
    do {
        if (a[0] > 3) break;
        is_valid(a);
    } while (next_permutation(a, a + 9));

    return 0;
}
