#include<stdio.h>

int value_address() {
    int a = 10;
    int *b = &a;
    int **c = &b;

    printf("%d\n", a); //value
    printf("%u\n", &a); //address
    printf("%u\n", b); //address
    printf("%d\n", *b); //value
    printf("%d\n", &b); //address
    printf("%u\n", *(&b)); //value
}

void wrong_swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    }
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    value_address();
    int a = 2;
    int b = 5;
    
    // wrong_swap(a, b); //won't work
    swap(&a, &b);
    printf("after swap\na=%d\nb=%d\n", a, b);
    return 0;
}