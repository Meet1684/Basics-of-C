#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr1, n;
    // char *ptr2;
    // float *ptr3;
    printf("\nEnter size to allocate int : ");
    scanf("%d", &n);
    ptr1 = (int *) calloc(n, sizeof(int)); // By default all values are set to 0
    // ptr2 = (char *) calloc(n, sizeof(char)); // By default all values are set to 0
    // ptr3 = (float *) calloc(n, sizeof(float)); // By default all values are set to 0

    for(int i=0;i<n;i++){
        printf("\nValue at ptr[%d] : %d", i, ptr1[i]);
    }
    printf("\n******************\n");
    for(int i=0;i<n;i++){
        printf("\nEnter the value for ptr1[%d]: ", i);
        scanf("%d", &ptr1[i]);
    }
    printf("\n******************\n");
    for(int i=0;i<n;i++){
        printf("\nValue at ptr[%d] : %d", i, ptr1[i]);
    }
    free(ptr1);
    return 0;
}