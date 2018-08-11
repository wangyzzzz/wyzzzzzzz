/*************************************************************************
	> File Name: EP36.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月22日 星期日 14时11分49秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#include <math.h>
int is_palindromic(int64_t x) {
    int64_t temp = x, num = 0;
    while(x) {
        num = num * 10 + x % 10;
        x /= 10;
    }
    return temp == num;
}

int64_t to_base_2(int x) {
    int64_t num = 0;
    int n = 0;
    while(x) {
        num += x % 2 * pow(10, n);
        n++;
        x /= 2;
    }
    return num;
}
int main() {
    int sum = 0;
    for(int i = 1; i <10000; i++) {
        //printf("%d\n", to_base_2(i));
        if(!is_palindromic(i)) continue;
        if(!is_palindromic(to_base_2(i))) continue;
        sum += i;
    }
    printf("%d\n", sum);



    return 0;
}
