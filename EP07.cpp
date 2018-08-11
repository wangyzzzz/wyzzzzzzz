/*************************************************************************
	> File Name: EP07.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月23日 星期一 18时19分36秒
 ************************************************************************/

#include <stdio.h>

int is_prime(int x) {
    for(int i = 2; i * i <= x; i++) {
        if(x % i == 0) return 0;
    }
    
    return 1;
}


int main() {
    int n = 0, num = 1;
    do {
        num++;
        while(!is_prime(num)) num++;
        n++;
    } while(n < 10001);

    printf("%d\n", num); 


    return 0;
}
