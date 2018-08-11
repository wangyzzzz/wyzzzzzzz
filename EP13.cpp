/*************************************************************************
	> File Name: EP13.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月24日 星期二 16时47分16秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int num[55];
int ans[55] = {1, 0};

int main() {
    for(int i = 0; i < 100; i++) {
        scanf("%s", num);
        int len = strlen(num);
        if(ans[0] < len) ans[0] = len;
        for(int j = 0; j < len; j++) {
            ans[len - j] += (num[j] - '0');
        }
        for(int j = i; j <= ans[0]; j++) {
            if(ans[j] < 10) continue;
            ans[j + 1] += ans[j] / 10;
            ans[j] %= 10;
            ans[0] += (j == ans[0]);
        }
        for(int i = ans[0]; i > ans[0] - 10; i--) {
            printf("%d", ans[i]);
        }
    }
    printf("\n");
     return 0;
}
