#include <stdio.h>
#include <stdlib.h>


int *fibo(int n){
    int *tab = malloc(n*sizeof(int));
    tab[0] = 1;
    tab[1] = 2;
    for(int i = 0; i < n; i++){
        tab[i+2] = tab[i] + tab[i+1];
    }
    return tab;
}


int main(void){
    const int n = 35;
    int *tab = fibo(n);
    int s = 0;
    for(int i = 0; i < n; i++){
        if(tab[i] % 2 == 0 && tab[i] <= 4000000){
            s += tab[i];
        }
    }
    printf("%d\n", s);
    return 0;
}