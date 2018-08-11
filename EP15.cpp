/*************************************************************************
	> File Name: EP15.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月29日 星期日 13时07分55秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

int main() {
    int64_t m = 40, n = 20, ans = 1,ans_1 = 1;
    for (int i = m; i > 20; i--) {
        ans *= i;
        while(i % n == 0 && n != 1) {
            ans /= n;
            n--;
        }
    }
    for (int i = n; i > 1; i--) ans_1 *= i; 
    printf("%" PRId64 "\n", ans);
    printf("%" PRId64 "\n", ans_1);
    printf("%" PRId64 "\n", ans / ans_1);
    return 0;
}
