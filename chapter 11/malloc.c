#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr1, n;
    printf("\nEnter size to allocate int : ");
    scanf("%d", &n);
    // char *ptr2;
    // float *ptr3;
    ptr1 = malloc(n* sizeof(int)); // Dynamic memory allocation of 6 int
    // ptr2 = malloc(6* sizeof(char)); // Dynamic memory allocation of 6 char
    // ptr3 = malloc(6* sizeof(float)); // Dynamic memory allocation of 6 float

    for(int i=0;i<n;i++){
        printf("\nEnter the value for ptr1[%d]: ", i);
        scanf("%d", &ptr1[i]);
    }
    printf("\n******************\n");
    for(int i=0;i<n;i++){
        printf("\nValue at ptr[%d] : %d", i, ptr1[i]);
    }
    printf("\n******************\n");
    free(ptr1);
    return 0;
}