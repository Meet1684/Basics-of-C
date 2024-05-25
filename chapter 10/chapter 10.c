#include<stdio.h>

int first(){
    FILE *ptr = fopen("int.txt", "r");
    int a[10];
    int i=0;
    while(fscanf(ptr, "%d", &a[i])!=EOF){
        printf("\n%d", a[i]);
        i++;
    }
    fclose(ptr);
}

int mulTable(int num){
    FILE *ptr = fopen("table.txt", "w");
    fprintf(ptr, "\n****************Multiplication table of %d*********************\n", num);
    for(int i=0;i<10;i++){
        fprintf(ptr, "%d X %d = %d\n", num, i+1, num*(i+1));
    }
    fprintf(ptr, "\n***************************************************************\n");
}

void read_write(){
    FILE *ptr1 = fopen("a.txt", "r");
    FILE *ptr2 = fopen("b.txt", "a+");
    printf("\n***************Reading characters one by one***************\n");
    char c = fgetc(ptr1);
    while(c!=EOF){
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }
    fprintf(ptr2, "\n");
    rewind(ptr1);
    c = fgetc(ptr2);
    while(c!=EOF){
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);
}

void emp(){
    FILE *ptr = fopen("Employees.txt","a+");
    char name[100];
    float salary;
    printf("\nEnter name : ");
    scanf("%s", &name);
    printf("\nEnter Salary : ");
    scanf("%f", &salary);
    fprintf(ptr, "\n\nName : %s", name);
    fprintf(ptr, "\nSalary : %.2f", salary);
}

int dbl(){
    FILE *ptr1 = fopen("double.txt","r");
    int n, db;
    fscanf(ptr1, "%d", &n);
    db = n*2;
    fclose(ptr1);
    FILE *ptr2 = fopen("double.txt","w");
    fprintf(ptr2,"%d",db);
    fclose(ptr2);
    printf("\nCheck the double.txt file for changes\n");
}

int main(){
    first();
    mulTable(5);
    read_write();
    emp();
    dbl();
    return 0;
}