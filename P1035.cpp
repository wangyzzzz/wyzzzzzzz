/*************************************************************************
	> File Name: P1035.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月14日 星期二 14时05分25秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int num, n = 0; 
    double sum = 0;
    scanf("%d", &num);
    while (sum < num) {
        n++;
        sum += 1.0 / n;
        // printf("%.1lf ", sum);
        
    }
    printf("%d\n", n);
    return 0;
}
