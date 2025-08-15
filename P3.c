#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>


bool *eratosthene(int n){
    bool *tab = calloc((n+1), sizeof(bool));
    for(long int i = 2; i < n+1; i++){
        tab[i] = true;
    }
    tab[0] = false;
    tab[1] = false;
    for(long int i = 2; i <= n; i++){
        if(tab[i]){
            for(long int j = i*i; j < n+1; j = j+i){
                tab[j] = false;
            }
        }
    }
    return tab;
}


long int prime_factor(long int n){
    long int r = floor(sqrt(n));
    long int s = 0;
    bool *tab = eratosthene(r);
    for(long int i = 0; i < r; i++){
        if(tab[i] && n % i == 0){
            s = i;
        }
    }
    return s;
}


int main(void){
    printf("%ld\n", prime_factor(600851475143));
    return 0;
}