#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


long long int path_numb(int n, int m, long long int **tab_vu){
    if(tab_vu[n][m] != -1){
        return tab_vu[n][m];
    }
    if(n == 0 || m == 0){
        return tab_vu[n][m] = 1;
    }
    tab_vu[n][m] = path_numb(n-1, m, tab_vu) + path_numb(n, m-1, tab_vu);
    return tab_vu[n][m];
}


int main(void){
    long long int **tab_vu = malloc(21*sizeof(long long int*));
    for(int i = 0; i < 21; i++){
        tab_vu[i] = malloc(21*sizeof(long long int));
        for(int j = 0; j < 21; j++){
            tab_vu[i][j] = -1;
        }
    }
    printf("%lld\n", path_numb(20, 20, tab_vu));

    for (int i = 0; i < 21; i++){
        free(tab_vu[i]);
    }
    free(tab_vu);
    
    return 0;
}