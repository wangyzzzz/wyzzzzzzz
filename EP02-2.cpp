/*************************************************************************
	> File Name: EP02-2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月20日 星期五 15时46分39秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int f[3] = {1,2,0}, sum = 0, n = 1;
    while(f[n % 3] <=4000000){
        f[(n + 1) % 3] = f[(n + 2) % 3] + f[n % 3];
        if (f[(n + 2) % 3] & 1) sum += f[n + 2];
        n++;
    }
    printf("%d",sum);


    return 0;
}

