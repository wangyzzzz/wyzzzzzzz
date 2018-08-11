/*************************************************************************
	> File Name: EP36-2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月22日 星期日 14时59分03秒
 ************************************************************************/

#include <stdio.h>

int is_palindromic(int x, int n) {
    int temp = x, num = 0;
    while(x) {
        num = num * n + x % n;
        x /= n; 
    }
    
    return temp == num;
}

int main() {
    int ans = 0;
    for(int i = 1; i <= 10000; i++) {
        if(!is_palindromic(i, 2)) continue;
        if(!is_palindromic(i, 10)) continue;
        ans += i;
       
    }
    printf("%d\n", ans);

    return 0;
}
