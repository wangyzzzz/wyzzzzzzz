/*************************************************************************
	> File Name: EP26.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 10时01分45秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX_N 1000
int dnum[MAX_N + 5] = {0};

int get_length(int x) {
    int y = 1, n = 1;
    memset(dnum, 0, sizeof(dnum));
    while(y != 0 && dnum[y] == 0) {
        dnum[y] = n;
        y = y * 10 % x;
        n++;
    }
    return y ? (n - dnum[y]) : 0;
}


int main() {
    int max_length = 0, ans = 0;
    for (int i = 2; i < MAX_N; i++) {
        int temp_length = get_length(i);
        if(temp_length > max_length) {
            max_length = temp_length;
            ans = i;
        }
    }
    printf("%d\n", ans);


    return 0;
}
