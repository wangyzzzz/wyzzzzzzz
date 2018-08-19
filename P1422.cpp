/*************************************************************************
	> File Name: P1422.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月14日 星期二 11时47分06秒
 ************************************************************************/

#include <stdio.h>

double get_result(double n) {
    double ans = 0;

    if (n <= 150) {
        ans = n * 0.4463;
    } else if (n <= 400) {
        ans = 150 * 0.4463 + (n - 150) * 0.4663;
    } else {
        ans = 150 * 0.4463 + 250 * 0.4663 + (n - 400) * 0.5663;
    }

    return ans;
}

int main() {
    int num;
    
    scanf("%d", &num);
    printf("%.1lf\n", get_result(num));

    return 0;
}
