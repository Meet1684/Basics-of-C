#include<stdio.h>
#include<stdlib.h>

int first(){
    int *ptr;
    ptr = malloc(6* sizeof(int));
    for(int i=0;i<6;i++){
        printf("\nEnter value of ptr[%d] : ", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0;i<6;i++){
        printf("\nValue at ptr[%d] : %d", i, ptr[i]);
    }
    free(ptr);
}

int second(){
    int *ptr;
    int n;
    printf("\nEnter size : ");
    scanf("%d", &n);
    ptr = malloc(n* sizeof(int));
    for(int i=0;i<n;i++){
        printf("\nEnter value of ptr[%d] : ", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0;i<n;i++){
        printf("\nValue at ptr[%d] : %d", i, ptr[i]);
    }
    free(ptr);
}

int third(){
    int *ptr;
    ptr = (int *) calloc(6, sizeof(int));
    for(int i=0;i<6;i++){
        printf("\nEnter value of ptr[%d] : ", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0;i<6;i++){
        printf("\nValue at ptr[%d] : %d", i, ptr[i]);
    }
    free(ptr);
}

int forth(){
    int *ptr;

    ptr = malloc(5* sizeof(int));
    for(int i=0;i<5;i++){
        printf("\nEnter the value for ptr1[%d]: ", i);
        scanf("%d", &ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("\nValue at ptr[%d] : %d", i, ptr[i]);
    }

    ptr = realloc(ptr, 10*sizeof(int));
    for(int i=0;i<10;i++){
        printf("\nEnter the value for ptr1[%d]: ", i);
        scanf("%d", &ptr[i]);
    }
    for(int i=0;i<10;i++){
        printf("\nValue at ptr[%d] : %d", i, ptr[i]);
    }
    free(ptr);
    return 0;
}

int fifth(){
    int *ptr, num = 7;

    ptr = malloc(10* sizeof(int));
    for(int i=0;i<10;i++){
        ptr[i] = num*(i+1);
        printf("\n%d X %d = %d", num, i+1, ptr[i]);
    }
    printf("\n***********************************\n");
    ptr = realloc(ptr, 15*sizeof(int));
    for(int i=0;i<15;i++){
        ptr[i] = num*(i+1);
        printf("\n%d X %d = %d", num, i+1, ptr[i]);
    }
    free(ptr);
    return 0;
}

int sixth(){
    int *ptr;

    ptr = (int *) calloc(5, sizeof(int));
    for(int i=0;i<5;i++){
        printf("\nEnter the value for ptr1[%d]: ", i);
        scanf("%d", &ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("\nValue at ptr[%d] : %d", i, ptr[i]);
    }

    ptr = realloc(ptr, 10*sizeof(int));
    for(int i=0;i<10;i++){
        printf("\nEnter the value for ptr1[%d]: ", i);
        scanf("%d", &ptr[i]);
    }
    for(int i=0;i<10;i++){
        printf("\nValue at ptr[%d] : %d", i, ptr[i]);
    }
    free(ptr);
    return 0;
}

int main(){
    first();
    second();
    third();
    forth();
    fifth();
    sixth();
    return 0;
}