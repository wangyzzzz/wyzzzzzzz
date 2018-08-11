/*************************************************************************
	> File Name: EP42.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 16时07分25秒
 ************************************************************************/

#include <stdio.h>
#include "EP42.h"


int tri(int x) {
    return x * (x + 1) / 2;
}
int binary_search(int x) {
    int head = 1, tail = 100, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (tri(mid) == x) return 1;
        if (tri(mid) > x) tail = mid - 1;
        else head = mid + 1;
    }
    return 0;
}
int main() {
    int ans = 0;
    for (int i = 0; i < 1786; i++) {
        int sum = 0;
        for (int j = 0; num[i][j]; j++) {
            sum += num[i][j] - 'A' + 1;
        }
        if(binary_search(sum)) ans++;
    }
    printf("%d\n", ans);
    return 0;
}

