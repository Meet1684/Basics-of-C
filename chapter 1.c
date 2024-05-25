#include<stdio.h>
#include<math.h>

int rectangle(){
    
    int len, bre;

    printf("Enter Length:\n");
    scanf("%d", &len);

    printf("Enter Breadth:\n");
    scanf("%d", &bre);

    printf("Area of Rectangle = %d", len*bre);
}

int circle(){
    int r;
    float pie = 3.14;

    printf("Enter Radius:\n");
    scanf("%d\n", &r);

    printf("\nArea of Circle = %f", pie*pow(r, 2));
}

int cylinder(){
    int r, h;
    float pie = 3.14;

    printf("Enter Radius:\n");
    scanf("%d\n", &r);

    printf("Enter Height:\n");
    scanf("%d", &r);

    printf("\nVolume of Cylinder = %f", pie*pow(r, 2)*h);
}

int temperature(){
    int subch;
    printf("\n\n-----------Submenu-----------");
    printf("\n1. Celsius to Farenheit");
    printf("\n2. Farenheit to Celsius");
    printf("\n0. Exit\n");
    printf("\nEnter your choice : ");
    scanf("\n%d", &subch);
    float f, c;

    switch(subch){
        case 1:
        printf("Enter Celsius:\n");
        scanf("%f", &c);
        f = (c*9/5)+32;
        printf("\nFarenheit = %f", f);
        break;
        
        case 2:
        printf("Enter Farenheit:\n");
        scanf("%f", &f);
        c = f-32*(5/9);
        printf("\nCelsius = %f", c);
        break;

        case 0:
        exit(0);

        default:
        printf("\nInvalid Choice!");
    }
    
}

int interest(){
    int p, r, t, si;
    printf("Enter Amount:\n");
    scanf("%d", &p);

    printf("Enter Rate of Interest:\n");
    scanf("%d", &r);

    printf("Enter Time(Years):\n");
    scanf("%d", &t);

    si = p*r*t/100;

    printf("Simple Interest = %d", si);
}

int main(){
    int ch;
    printf("\n\n-----------Menu-----------");
    printf("\n1. Area of Rectangle");
    printf("\n2. Area of Circle");
    printf("\n3. Volume of Cylinder");
    printf("\n4. Temperature Conversion");
    printf("\n5. Simple Interest");
    printf("\n0. Exit\n");
    printf("\nEnter your choice : ");
    scanf("\n%d", &ch);

    switch(ch){
        case 1:
        rectangle();
        main();
        
        case 2:
        circle();
        main();

        case 3:
        cylinder();
        main();

        case 4:
        temperature();
        main();

        case 5:
        interest();
        main();

        case 0:
        exit(0);
        
        default:
        printf("\nInvalid Choice!");
    }
    return 0;
}