/*************************************************************************
	> File Name: EP35.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月28日 星期六 19时29分29秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAX_N 100000

int is_prime[MAX_N + 5] = {0};
int prime[MAX_N + 5] = {0, 0};

int swap(int x) {
    return x % 10 * pow(10, floor(log10(x))) + x / 10;
}
int is_valid(int x) {
    
    if (is_prime[x]) return 0;
    for (int i = 1; i <= floor(log10(x)); i++) {
        x = swap(x);
        if(is_prime[x]) return 0;
    }

    return 1;
}
int main() {
    int ans = 0;
    for (int i = 2; i <= MAX_N; i++) {
        if (!is_prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0] && i * prime[j] <= MAX_N; j++) {
            is_prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    printf("%d\n", prime[2]);
    for (int i = 1; i <= prime[0]; i++) {
        printf("%d ", prime[i]);
        if (is_valid(prime[i])) {
            //printf("%d ", prime[i]);
            ans++;
        }
    }


    printf("%d\n", ans);

    return 0;
}
