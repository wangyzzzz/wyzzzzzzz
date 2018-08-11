/*************************************************************************
	> File Name: EP31.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月27日 星期五 11时52分14秒
 ************************************************************************/

#include <stdio.h>

#define MAX_W 8

int w[MAX_W] = {1, 2, 5, 10, 20, 50, 100, 200};
int dp[201] = {0};

int main() {
    dp[0] = 1;
    for (int i = 0; i < MAX_W; i++) {
        for (int j = w[i]; j < 201; j++) {
            dp[j] += dp[j - w[i]];
        }
    }
    printf("%d\n", dp[200]);


    return 0;
}
