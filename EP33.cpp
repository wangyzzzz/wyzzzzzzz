/*************************************************************************
	> File Name: EP33.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月28日 星期六 22时40分17秒
 ************************************************************************/

#include <stdio.h>
 
 int gcd(int a, int b){
        if(!b) return a;
        return gcd(b, a % b);

 }
 int is_valid(int x, int y){
        if(x > 100 || x < 10) return 0;
        if(y > 100 || y < 10) return 0;
        int x1 = x / 10;
        int x2 = x % 10;
        int y1 = y / 10;
        int y2 = y % 10;
        if(!x1 || !x2 || !y1 || !y2) return 0;
        if(x1 == y1 && x2 * y == y2 * x && x2 != 0) return 1;
        if(x2 == y2 && x1 * y == y1 * x && x1 != 0) return 1;
        if(x1 == y2 && x2 * y == y1 * x && x1 != 0) return 1;
        if(x2 == y1 && x1 * y == y2 * x && x2 != 0) return 1;
        return 0;

 }
 int main(){
        int x = 1, y = 1, c;
        for(int i = 10; i <= 100; i++){
            for(int j = i + 1; j <= 100; j++){
                if(is_valid(i, j) == 0) continue;
                    x *= i; y *= j;
                    c = gcd(x,y);
                    x /= c;
                    y /= c;
                    
         }
            
     }
        printf("%d\n",y);
        return 0;

 }
