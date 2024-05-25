#include<stdio.h>

int *arr_input(int *arr, int n){
    for(int i=0;i<n;i++) {
        printf("\nEnter a[%d] : ",i);
        scanf("%d", &arr[i]);
    }
    return arr;
}

int change_element(int *arr) {
    int i,n;
    printf("\nEnter position : ");
    scanf("%d", &i);
    i--;
    printf("\nEnter Element : ");
    scanf("%d", &arr[i]);
}

int printarray(int *ptr, int n) {
    for(int i=0;i<n;i++) {
        printf("%d\n ", ptr[i]);
    }
}

int main(){
    int n;
    printf("size of array : ");
    scanf("%d", &n);
    int arr[n];
    int *ptr_arr = arr_input(arr, n);
    // change_element(arr);
    printarray(arr, n);
    return 0;
}