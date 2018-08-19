/*************************************************************************
	> File Name: P1089.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月14日 星期二 12时58分17秒
 ************************************************************************/

#include <stdio.h>

int get_result() {
    int num, money = 0, mom = 0;
    for (int i = 1; i <= 12; i++) {
        scanf("%d", &num);
        money += 300 - num;
        if (money < 0) {
            return -i;
        }
        if (money / 100 == 0) continue;
        mom += money / 100 * 100;
        money -= money / 100 * 100;
    }
    return mom * 1.2 + money;
}

int main() {

    printf("%d\n", get_result());
    return 0;
}
