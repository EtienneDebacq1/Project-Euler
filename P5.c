#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>


int evenly_div(int n){
    int N = 1;
    bool state = true;
    while(state){
        for(int i = 1; i <= n; i++){
            if(N % i != 0){
                N++;
                break;
            }
            if(i == 20){
                state = false;
            }
        }
    }
    return N;
}


int main(void){
    printf("%d\n", evenly_div(20));
    return 0;
}