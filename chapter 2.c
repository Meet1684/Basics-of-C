#include<stdio.h>

int myfunc(){
    int num;
    printf("Enter Number :");
    scanf("%d", *&num);

    if(num%97 == 0) {
        printf("Divisible by 97");
    }
    else {
        printf("Not divisible by 97");
    }
}
int main(){
    myfunc();
    return 0;
}