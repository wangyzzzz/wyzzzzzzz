/*************************************************************************
	> File Name: EP45.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月29日 星期日 09时19分11秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

int64_t pentagonal(int64_t n) {
    return n * (3 * n - 1) >> 1;
}

int64_t hexagonal(int64_t n) {
    return n * (2 * n - 1);
}

int64_t binary_search(int64_t (*num)(int64_t), int n, int64_t x) {
    int head = 0, tail = n - 1, mid = 0;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (num(mid) == x) return mid;
        if (num(mid) > x) tail = mid - 1;
        else head = mid + 1;
    }

    return -1;
}

int main() {
    int64_t n = 144;
    while (binary_search(pentagonal, 2 * n, hexagonal(n)) == -1) n++;
    printf("%" PRId64 "\n", hexagonal(n));
}
