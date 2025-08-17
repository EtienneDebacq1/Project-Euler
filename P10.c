#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


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


long int sum_tab(bool *tab, int N){
    long int s = 0;
    for(int i = 0; i < N; i++){
        if(tab[i]){
            s += i;
        }
    }
    return s;
}


int main(void){
    bool *tab = eratosthene(2000000);
    printf("%ld\n", sum_tab(tab, 2000001));
    return 0;
}