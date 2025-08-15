#include <stdio.h>


int sum(int n){
    int s = 0;
    for(int i = 0; i < n; i++){
        if(i % 3 == 0 || i % 5 == 0){
            s += i;
        }
    }
    return s;
}


int main(void){
    printf("%d\n", sum(1000));
    return 0;
}