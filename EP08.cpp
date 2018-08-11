/*************************************************************************
	> File Name: EP08.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月25日 星期三 12时17分24秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#include <string.h>

char num[1005] = {0}, temp[1005] = {0};

int main() {
    int64_t p = 1, zero = 0, ans = 0;
    //while (scanf("%s", temp) != EOF) {
    //    strcat(num, temp);
    //}
    scanf("%s", num);
    for(int i = 0; num[i]; i++) {
        if(num[i] == '0') {
            zero++;
        } else {
            p *= (num[i] - '0');
        }

        if(i >= 13) {
            if (num[i - 13] == '0') {
                zero -= 1;
            } else {
                p /= (num[i - 13] - '0');
            }
        }
        if(zero == 0 && p > ans) ans = p;
    }
    printf("%" PRId64 "\n", ans);

    return 0;
}
