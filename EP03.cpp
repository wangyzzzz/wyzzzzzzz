/*************************************************************************
	> File Name: EP03.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月21日 星期六 11时19分37秒
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
#define NUM 64

int main(){
    int64_t num = NUM, n = 2, ans = 0;
    while(n * n <= num){
        if(num % n == 0) ans = n;//证明这句代码，n一定是素数
        printf("%d\n", ans);
        while(num % n == 0) num /= n;
        printf("%d\n",num);
        n++;
    }
    printf("%d\n",num);
    if(num != 1) ans = num;//证明这句代码，num一定是素数
    printf("%" PRId64 "\n", ans);

    return 0;
}
