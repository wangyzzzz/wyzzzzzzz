/*************************************************************************
	> File Name: EP38.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月27日 星期五 15时15分49秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int is_valid(int x) {
    int digit = 0, n = 0, num[10] = {0};
    do {
        n++;
        int y = x * n;
        while (y) {
            if ((y % 10) == 0) return 0;
            if(num[y % 10]) return 0;
            num[y % 10] = 1;
            y /= 10;
            digit++;
        }
     } while (digit < 9);
    if (digit > 9) return 0;
    int ret = 0;
    for (int i = 1; i <= n; i++) {
        int y = x * i;
        ret = ret * (int)pow(10, (floor(log10(y)) + 1)) + y;
    }
    return ret;

}

int main() {
    int ans = 0, temp = 0;
    for (int i = 1; i < 10000; i++) {
        if(!is_valid(i)) continue;
        temp = is_valid(i);
        printf("%d * (1,2,3) = %d\n", i, temp);
        if(temp > ans) ans = temp;
    }
        printf("%d\n", ans);
    return 0;
}
