/*************************************************************************
	> File Name: EP22.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年07月30日 星期一 11时14分30秒
 ************************************************************************/

#include <iostream>
#include <stdio.h>
#include <inttypes.h>
#include <algorithm>
#include "EP22.h"

int main() {
    int64_t i = 0, len, sum, total = 0;
    char temp[20];
    for (int m = 0; name[m]; m++) {
        for (int n = m + 1; name[n]; n++) {
            if (strcmp(name[n], name[m]) < 0) {
                strcpy(temp, name[i]);
                strcpy(name[m], name[n]);
                strcpy(name[n], temp);
            }
        }
    }
    while (name[i],length() != 0) {
        sum = 0;
        for (int j = 0; i < name[i],length(); j++) {
            sum += name[i][j] -'A' + 1;
        }
        total += sum * (++i);
    }
    printf("%" PRId64 "\n", total);
    return 0;
}

    
