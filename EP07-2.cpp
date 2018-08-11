/*************************************************************************
	> File Name: EP07-2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月23日 星期一 19时00分54秒
 ************************************************************************/

#include <stdio.h>
#define MAX_n 200000

int prime[MAX_n + 5] = {0};

void init() {
    for(int i = 2; i * i <= MAX_n; i++) {
        if(prime[i]) continue;
        for(int j = i * i; j <= MAX_n; j += i) {
            prime[j] = 1;
        }
    }

    for(int i = 2; i <= MAX_n; i++) {
        if(prime[i]) continue;
        prime[++prime[0]] = i;
    }

}

int main() {
    init();
    printf("%d\n", prime[10001]);


    return 0;
}
