/*************************************************************************
	> File Name: EP12.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月29日 星期日 11时16分31秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 10000
int prime[MAX_N + 5] = {0};
int dnum[MAX_N + 5] = {0};
int mnum[MAX_N + 5] = {0};
void init() {
    for (int i = 2; i * 2 <= MAX_N; i++) {
        if(!prime[i]) {

            prime[++prime[0]] = i;
            dnum[i] = 2;
            mnum[i] = 1;

        }
        for (int j = 1; j <= prime[0] && i * prime[j] <= MAX_N; j++) {
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) {
                mnum[i * prime[j]] = mnum[i] + 1;
                dnum[i * prime[j]] = dnum[i] / (mnum[i] + 1) * (mnum[i] +2);
                break;
            } else {
                mnum[i * prime[j]] = 1;
                dnum[i * prime[j]] = dnum[i] * dnum[prime[j]];
            }
        }
    }
    
}
int factor_nums(int n) {
    if (n & 1) {
        return dnum[n] * dnum[(n + 1) / 2];
    }
    return dnum[n / 2] * dnum[n + 1];
}
int main() {
    int n = 1;
    init();
    while (factor_nums(n) < 500) n++;
    
    
    printf("%d\n", n * (n + 1) >> 1);
    return 0;
}
