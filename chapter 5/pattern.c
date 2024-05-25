#include<stdio.h>

int pattern1(){
    int size, c;
    printf("\nEnter Size of pattern : ");
    scanf("%d", &size);
    int i, j;
    for(i=0; i<size; i++) {
        for(j=0; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern2usingrecursion(int n){
    if(n==1) {
        printf("*\n");
        return;
    }
    pattern2usingrecursion(n-1); //adjust (n-1) to change the pattern
    for(int i=0; i<(2*n-1); i++) {
        printf("*");
    }
    printf("\n");
}

void pattern2usingloops(){
    int i, j, k=1;
    for(i=0; i<5; i++) {
        for(j=0; j<k; j++) {
            printf("*");
        }
        printf("\n");
        k+=2; //change value of k to change the pattern
    }
}

void pattern3() {
    
}

int main(){
    pattern2usingloops(5);
    return 0;
}