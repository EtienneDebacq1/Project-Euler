#include <stdio.h>
#include <stdbool.h>

bool valid(int a, int b, int c){
    return (a*a + b*b == c*c) && (a + b + c == 1000) && (a<b) && (b<c);
}

int research(){
    for(int a=0; a<1000; a++){
        for(int b=0; b<1000; b++){
            for(int c=0; c<1000; c++){
                if(valid(a, b, c)){
                    return a*b*c;
                }
            }
        }
    }
    return -1;
}

int main(void){
    int answer = research();
    printf("%d\n", answer);
    return 0;
}