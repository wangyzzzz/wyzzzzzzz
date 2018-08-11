/*************************************************************************
	> File Name: EP11.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月24日 星期二 14时30分56秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 30

int dir_arr[4][2] = {
    1, 1, 1, -1,
    0, 1, 1, 0
};
int main() {
    int num[MAX_N][MAX_N] = {0};
    for(int i = 5; i < MAX_N - 5; i++) {
        for(int j = 5; j < MAX_N - 5; j++) {
            scanf("%d", num[i] + j);
        }
    }
    
    int ans = 0;
    for(int i = 5; i < MAX_N - 5; i++) {
        for(int j = 5; j < MAX_N - 5; j++) {
            for(int k = 0; k < 4; k++) {
                int sum = 1;
                for(int step = 0; step < 4; step++) {
                    int xx = i + step * dir_arr[k][0];
                    int yy = j + step * dir_arr[k][1];
                    sum *= num[xx][yy];
                }
                if(sum > ans) ans = sum;
                
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
