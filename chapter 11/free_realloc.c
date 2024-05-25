#include<stdio.h>
#include<stdlib.h>

int main(){
    // To copy values from ptr1 to ptr use memcpy(ptr1, ptr2) function.
    int *ptr1, *ptr2, n1, n2;
    printf("\nEnter size to allocate int : ");
    scanf("%d", &n1);

    ptr1 = malloc(n1* sizeof(int));

    for(int i=0;i<n1;i++){
        ptr2 = malloc(n1*sizeof(int));
        printf("\nEnter the value for ptr1[%d]: ", i);
        scanf("%d", &ptr1[i]);
        free(ptr2);
    }
    printf("\n******************\n");
    for(int i=0;i<n1;i++){
        printf("\nValue at ptr[%d] : %d", i, ptr1[i]);
    }
    printf("\n*********************************************************888\n");

    printf("\nEnter the value for reallocate : ");
    scanf("%d", &n2);
    ptr1 = realloc(ptr1, n2*sizeof(int));

    for(int i=0;i<n2;i++){
        ptr2 = malloc(n2*sizeof(int));
        printf("\nEnter the value for ptr1[%d]: ", i);
        scanf("%d", &ptr1[i]);
        free(ptr2);
    }
    printf("\n******************\n");
    for(int i=0;i<n2;i++){
        printf("\nValue at ptr[%d] : %d", i, ptr1[i]);
    }
    printf("\n******************\n");
    return 0;
}