#include<stdio.h>

float average(int a, int b, int c){
    float average = (a + b + c)/3;
    printf("\nAverage : %.2f\n", average);
    return average;
}

float gravitational_force(){
    float m;
    printf("\nEnter mass in kgs : ");
    scanf("%f", &m);
    float res = m * 9.8;
    return res;
}

int fibonacci() {
    int n, i, n1=0, n2=1, next;
    printf("\n Enter the number of terms to display Fibonacci series:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i<=1){
            next=i;
        }
        else{
            next=n1+n2;
            n1=n2;
            n2=next;
        }
        printf("%d\n", next);
    }
}

int main(){
    // average(5,10,15);
    // gravitational_force();
    // fibonacci();
    return 0;
}