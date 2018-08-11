/*************************************************************************
	> File Name: EP30.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月22日 星期日 11时01分44秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAX_n 5000000
int is_equal(int x) {
    int temp = x, sum = 0;
    while(x) {
        sum += (int)pow(x % 10, 5);
        x /= 10;
    }
    return temp == sum;
}


int main(){
    int ans = 0;
    for(int i = 2; i < 9*9*9*9*9*6; i++) {
        if(!is_equal(i)) continue;
        printf("%d\n", i);
        ans += i;
    }
    printf("%d\n", ans);
    printf("%d\n", 9*9*9*9*9*6);


    return 0;
}

