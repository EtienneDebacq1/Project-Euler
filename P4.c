#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>


int *int_to_intlist(int n){
    int r = floor(log10(n))+1;
    int *tab = malloc(r*sizeof(int));
    for(int i = 0; i < r; i++){
        int j = (int)pow(10., (float)i);
        tab[r-1-i] = (n/j) % 10;
    }
    return tab;
}


bool est_symetrique(int *tab, int n){
    int r = (int)(n/2);
    for(int i = 0; i < r; i++){
        if(tab[i] != tab[n-1-i]){
            return false;
        }
    }
    return true;
}


int main(void){
    int N;
    int *tab;
    for(int i = 100; i < 1000; i++){
        for(int j = 100; j < 1000; j++){
            tab = int_to_intlist(i*j);
            if(N < i*j && est_symetrique(tab, floor(log10(i*j))+1)){
                N = i*j;
            }
        }
    }
    free(tab);
    printf("%d\n", N);
    return 0;
}