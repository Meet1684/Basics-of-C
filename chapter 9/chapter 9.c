#include<stdio.h>

typedef struct vector{
    int x;
    int y;
} vec;

typedef struct complex{
    int real;
    int imaginary;
} comp;

typedef struct FullDate_Time{
    int date;
    int month;
    int year;
    int hour;
    int min;
    int sec;
} date_time;

vec inputVector(vec *v){
    printf("\nEnter x dimension of input vector : ");
    scanf("%d", &v->x);
    printf("\nEnter y dimension of input vector : ");
    scanf("%d", &v->y);
    return *v;
}

vec sumVector(vec a, vec b){
    vec newVector;
    newVector.x = a.x + b.x;
    newVector.y = a.y + b.y;
    return newVector;
}

comp inputComplex(comp *c){
    printf("\nEnter Real Part : ");
    scanf("%d", &(*c).real);
    printf("\nEnter Imaginary Part : ");
    scanf("%d", &(*c).imaginary);
    return *c;
}

comp sumComplex(comp c1, comp c2){
    comp sumc;
    sumc.real = c1.real + c2.real;
    sumc.imaginary = c1.imaginary + c2.imaginary;
    return sumc;
}

void displayDate(date_time d){
    printf("\n%d/%d/%d", d.date, d.month, d.year);
}

int cmpDate_Time(date_time d1, date_time d2){
    int result = 0;
    if(d1.year!=d2.year){
        result += d1.year-d2.year;
    }
    if(d1.month!=d2.month){
        result += d1.month-d2.month;
    }
    if(d1.date!=d2.date){
        result += d1.date-d2.date;
    }
    if(d1.hour!=d2.hour){
        result += d1.hour-d2.hour;
    }
    if(d1.min!=d2.min){
        result += d1.min-d2.min;
    }
    if(d1.sec!=d2.sec){
        result += d1.sec-d2.sec;
    }
    return result;
}

int main(){
    printf("\n**************Vectors****************\n");
    vec v1, v2;
    printf("\nVector 1\n");
    inputVector(&v1);
    printf("\nVector 2\n");
    inputVector(&v2);
    vec sumv = sumVector(v1, v2);
    printf("sum of x = %d\n", sumv.x);
    printf("sum of y = %d\n", sumv.y);
    printf("\n*************************************\n");
    
    printf("\n**************Complex Numbers****************\n");
    comp c[5];
    for(int i=0;i<5;i++){
        printf("\nComplex Number %d\n", i+1);
        inputComplex(&c[i+1]);
    }
    comp sumc = sumComplex(c[1], c[2]);
    printf("\nSum : %d + %di", sumc.real, sumc.imaginary);
    printf("\n*********************************************\n");

    printf("\n**************Date****************\n");
    date_time d1 = {16, 8, 2004, 7, 35, 20};
    date_time d2 = {30, 4, 2008, 5, 58, 40};
    displayDate(d1);
    int r = cmpDate_Time(d1, d2);
    if(r<0){
        printf("\nDate 1 is bigger than date 2\n");
    }
    else if(r>0){
        printf("\nDate 2 is bigger than date 1\n");
    }
    else{
        printf("\nBoth dates are the same\n");
    }
    printf("\n**********************************\n");

    return 0;
}