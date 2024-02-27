//
// Series 1: Number/factorial.........n/n!
//

#include <stdio.h>

int series_1(){
    int n,temp, out=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; ++i) {
        temp = 1;
        for (int j = 1; j <= i; ++j) {
            temp *= j;
        }
        out += i/temp;
    }
    printf("%d",out);
    return 0;
}
