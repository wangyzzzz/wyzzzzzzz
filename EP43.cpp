/*************************************************************************
	> File Name: EP43.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月28日 星期六 21时41分37秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#include <algorithm>
using namespace std;

int prime[7] = {2, 3, 5, 7, 11, 13, 17};
int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int64_t is_valid(int *num) {
    int64_t ans= 0; 
    if(num[0] == 0) return 0;
    
    for (int i = 1; i < 8; i++) {
       int p = num[i] * 100 + num[i + 1] * 10 + num[i + 2];
        if (p % prime[i - 1] != 0) return 0; 
        
    }
    for (int i = 0; i < 10; i++) {
        ans = 10 * ans + num[i];
    }
    printf("%" PRId64 "\n", ans);
    return ans;
}

int32_t main() {

        

    int64_t sum = 0;

    do {
        
        sum += is_valid(a);

            
    } while(next_permutation(a, a + 10));

        printf("%"PRId64"\n", sum);

        return 0;


}
