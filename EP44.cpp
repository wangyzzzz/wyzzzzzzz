/*************************************************************************
	> File Name: EP44.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月27日 星期五 16时25分40秒
 ************************************************************************/

#include <stdio.h> 

int pentagonal(int n) {
    return (n * (3 * n - 1)) >> 1;
}

int is_pentagonal(int x) {
    int head = 1, tail = 10000, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (x == pentagonal(mid)) return 1;
        if (x < pentagonal(mid)) tail = mid -1;
        else head = mid + 1;
    }
    return 0;
}
