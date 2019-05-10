#include <stdio.h>

int median(int a, int b, int c){
    if(a<=b){
        if (b<=c){
            return b;
        }
        else if(a<=c){
            return c;
        }
        else{
            return a;
            }
    }
    else{
        if (a<=c){
            return a;
        }
        else if(b<=c){
            return c;
        }
        else{
            return b;
        }
    }
}

int main(void){
    int a, b, c;
    printf("Calculate median of entered three integer.\n");
    printf("a :"); scanf("%d", &a);
    printf("b :"); scanf("%d", &b);
    printf("c :"); scanf("%d", &c);

    printf("median is %d.\n", median(a, b, c));
}