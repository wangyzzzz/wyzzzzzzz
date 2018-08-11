/*************************************************************************
	> File Name: EP07-5.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月24日 星期二 13时58分04秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 10000

int prime[MAX_N + 5] = {0};

int main() {
    for(int i = 2; i <= MAX_N; i++) {
        if(!prime[i]) {
            prime[++prime[0]] = i;
        }
        for(int j = 1; j <= prime[0] && i * prime[j] <= MAX_N; j++) {
            prime[i * prime[j]] = 1;
            if(i % prime[j] == 0) break;
        }
    }

    for(int i = 1; i <= prime[0]; i++) {
        printf("%d ", prime[i]);
    }
    



    return 0;
}
