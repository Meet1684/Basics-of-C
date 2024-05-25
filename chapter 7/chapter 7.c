#include<stdio.h>

int first(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = &arr[0];
    printf("Pointer is pointing at value : %d\n", *ptr);
    printf("Third element : %d", *(ptr+2));
}

int second(){
    int table[10];
    int n, i;
    printf("\nEnter Number : ");
    scanf("%d", &n);
    for(i=0;i<10;i++){
        table[i] = n*(i+1);
    }
    for(i=0;i<10;i++){
        printf("%d * %d = %d\n", n, i+1, table[i]);
    }
}

int reverse(int *arr, int n){
    for(int i=0;i<(n/2);i++){
        int temp;
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i=0;i<n;i++){
        printf("%d\n", arr[i]);
    }
}

int countpositive(int *arr, int n){
    int pos_count;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos_count++;
        }
    }
    return pos_count;
}
int countnegative(int *arr, int n){
    int neg_count;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            neg_count++;
        }
    }
    return neg_count;
}

int table(int *mulTable, int num, int n){
    for(int i=0;i<n;i++){
        mulTable[i] = num*(i+1);
    }
    printf("Multiplication table of %d", num);
    for(int i=0;i<n;i++){
        printf("%d X %d = %d\n", num, i+1, mulTable[i]);
    }
}

int main(){
    // first();
    // second();

    // int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // reverse(arr, 10);

    // int arr2[10] = {-2, 6, 6, -3, 5,-9, 1, 7, 3, -7} ;
    // printf("Positive count : %d\n", countpositive(arr2, 10));
    // printf("Negative count : %d\n", countnegative(arr2, 10));

    // int mulTable[3][10];
    // int num;
    // printf("Enter Number :");
    // scanf("%d", &num);
    // table(mulTable[0], num, 10);
    return 0;
}