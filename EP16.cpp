/*************************************************************************
	> File Name: EP16.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月26日 星期四 09时17分26秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 1000
int ans[MAX_N + 5] = {1, 1};

int main() {
    int p = 2, sum = 0;
    for (int i = 1; i <= MAX_N; i++) {
        for(int j = 1; j <= ans[0]; j++) {
            if(!ans[j]) continue;
            ans[j] *= p;
        }
       // printf("%d ", ans[0]);
       // printf("%d ", ans[1]);
       // printf("%d ", ans[2]);
        for(int j = 1; j <= ans[0]; j++) {
            if(ans[j] >= 10) {
                ans[j+1] += ans[j] / 10;
                ans[j] %= 10;
                ans[0] += (j == ans[0]);
            }
        }
    }
   // printf("%d\n", ans[0]);
    for(int i = 1; i <= ans[0]; i++) {
        sum += ans[i];
    }

    printf("%d\n", sum);


    return 0;
}
