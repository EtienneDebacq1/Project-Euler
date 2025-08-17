#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


int maxi(int *tab, int n){
    int m = tab[0];
    for(int i = 0; i < n; i++){
        if(m < tab[i]){
            m = tab[i];
        }
    }
    return m;
}


int itera_collatz(int n){
    int ite = 0;
    while(n > 1){
        if(n%2 == 0){
            n = n/2;
        }else{
            n = 3*n+1;
        }
        ite++;
    }
    return ite;
}


int main(void){
    int n = 1000000;
    int *tab = malloc((n+1)*sizeof(int));
    for(int i = 0; i <= n; i++){
        tab[i] = -1;
    }
    tab[0] = 0;
    tab[1] = 0;

    for(int i = 0; i <= n; i++){
        if(i%2 == 0){
            if(tab[i/2] == -1){
                tab[i] = itera_collatz(i);
            }else{
                tab[i] = 1 + tab[i/2];
            }
        }else{
            if(tab[3*i+1] == -1){
                tab[i] = itera_collatz(i);
            }else{
                tab[i] = 1 + tab[3*i+1];
            }
        }
    }

    printf("%d\n", maxi(tab, n));

    return 0;
}