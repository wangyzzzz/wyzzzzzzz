/*************************************************************************
	> File Name: EP37.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月28日 星期六 20时15分44秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAX_N 10000000

int is_prime[MAX_N + 5] = {0};
int prime[MAX_N + 5] = {0};


int l_swap(int x) {
    x = x % (int)pow(10, floor(log10(x)));
    return x;
}
int r_swap(int x) {
    return x / 10;
}
int is_valid(int x) {
    int n = x, temp_1 = x, temp_2 = x;
    
    while (n) {
        if(n % 10 == 0) return 0;
        n /= 10;
    }
    
    for (int i = 1; i <= floor(log10(x)); i++) {
        temp_1 = l_swap(temp_1);
        temp_2 = r_swap(temp_2);
        if(is_prime[temp_1] || temp_1 == 1) return 0;
        if(is_prime[temp_2] || temp_2 == 1) return 0;
    }
    return 1;
}
int main() {
    
    for (int i = 2; i <= MAX_N; i++) { 
        if (!is_prime[i]) prime[++prime[0]] = i; 
        for (int j = 1; j <= prime[0] && i * prime[j] <= MAX_N; j++) { 
            is_prime[i * prime[j]] = 1; 
            if (i % prime[j] == 0) break;  
        } 
    } 
    
    int n = 0, ans = 0;   
       
    for(int i = 5; i <= prime[0]; i++) {
            
        if(is_valid(prime[i])) {
            printf("%d ", prime[i]);
            n++;
            ans += prime[i];
        }
        if (n == 11) break;
    }
        
    
    printf("%d\n", ans);
    return 0;
}
