#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


long long int triangle(long int n){
    return (n*(n+1))/2;
}


int num_div(long long int n){
    int r = 0;
    long long int m = floor(sqrt(n));
    for(long long int i = 1; i < m; i++){
        if(n%i == 0){
            r += 2;
        }
    }
    return r;
}


int main(void){
    long long int n = triangle(1);
    int i = 1;
    bool state = true;
    while(state){
        int r = num_div(n);
        if(r == 500){
            state = false;
            printf("%lld\n", n);
        }
        i++;
        n = triangle(i);
    }
    return 0;
}