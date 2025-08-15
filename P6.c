#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>


int sum_squares(int n){
    return (n*(n+1)*(2*n+1))/6;
}


int sum(int n){
    return (n*(n+1))/2;
}


int main(void){
    int n = 100;
    printf("%d\n", sum(n)*sum(n) - sum_squares(n));
    return 0;
}