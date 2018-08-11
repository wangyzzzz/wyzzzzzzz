/*************************************************************************
	> File Name: EP34.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月22日 星期日 11时40分07秒
 ************************************************************************/

#include <stdio.h>
#define NUM_n 362880*7 
int factorial(int x) {
    int sum= 1;
    for(int i = 2; i <= x; i++) sum *= i;
    return sum;

}

int is_equal(int x) {
    int temp = x, sum =0;
    while(x) {
        sum += factorial(x % 10);
        x /= 10;
    }
    return temp == sum;
}
int main() {
    
    int sum = 0;
    for(int i = 3; i <= NUM_n; i++) {
        if(!is_equal(i)) continue;
        sum += i;
        printf("%d\n",i);
    }
    printf("%d\n", sum);
    return 0;
}

