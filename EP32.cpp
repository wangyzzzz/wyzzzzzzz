/*************************************************************************
	> File Name: EP32.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月27日 星期五 14时20分45秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAX_N 10000

int digit(int x) {
    return floor(log10(x)) + 1;
}
int get_digit(int x, int *num) {
    
    while(x) {
        if (x % 10 == 0) return 0;
        if(num[x % 10]) return 0;
        num[x % 10] = 1;
        x /= 10;
    }
    return 1;

}

int is_valid(int a, int b, int c) {
    int num[10] = {0};
    if(!(digit(a) + digit(b) + digit(c) == 9)) return 0;
    if (!get_digit(a, num)) return 0;
    if (!get_digit(b, num)) return 0;
    if (!get_digit(c, num)) return 0;
    return 1;
}

int valid[MAX_N] = {0};
int main() {
    int ans = 0;
    
    for (int a = 2; digit(a) + digit(a) + digit(a * a) <= 9; a++) {
        for(int b = a + 1; digit(a) + digit(b) + digit(a * b) <= 9; b++) {
            
            if(!is_valid(a, b, a * b)) continue;
            ans += a * b * (1 - valid[a * b]);
            valid[a * b] = 1;
            printf("%d * %d = %d\n", a, b, a*b);
        }
        
    }

    printf("%d", ans);
    return 0;
}
