#include<stdio.h>

int print_address(int *a){
    printf("\nAddress of %d is %u\n", *a, &a);
}

int change_value(int *a) {
    *a=*a*10;
    return *a;
}

int wrong_change_value(int a) {
    a=a*2;
    return a;
}

void sum_avg(int a, int b, int *sum, float * avg) {
    *sum = a+b;
    *avg = (float)(a+b)/2;
}

int main(){
    
    int a = 5;
    print_address(&a);
    printf("\nAddress of %d is %u\n", a, &a);
    printf("\nvalue before change %d\n", a);
    change_value(&a);
    printf("\nvalue after change %d\n", a);

    int sum;
    float avg;
    int x=35;
    int y=78;
    sum_avg(x, y, &sum, &avg);
    printf("Sum : %d\n", sum);
    printf("Average : %.2f\n", avg);

    int i = 20;
    int *j = &i;
    int **k = &j;
    printf("Value of i is %d\n", **k);

    printf("\nvalue before change %d\n", a);
    wrong_change_value(a);
    printf("\nvalue after change %d\n", a);
    return 0;
}