#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


int d(int n){
    int s = 0;
    for(int i = 1; i < n; i++){
        if(n%i == 0){
            s += i;
        }
    }
    return s;
}


int main(void){
    int S = 0;

    for(int a = 1; a <= 10000; a++){
        int b = d(a);
        int c = d(b);
        if(a != b && a == c){
            S = S + a;
        }
    }
    printf("%d\n", S);

    return 0;
}