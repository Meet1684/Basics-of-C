#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int rollno;
    float attendance;
};

typedef struct employee {
    char name[100];
    int salary;
} emp;

struct student input1(struct student *s){
    char n[10];
    printf("\nEnter name : ");
    scanf("%s", n);
    strcpy((*s).name, n);
    printf("\nEnter Roll No : ");
    scanf("%d", &(*s).rollno);
    printf("\nEnter total attendance : ");
    scanf("%f", &(*s).attendance);
    return *s;
}

struct student input2(struct student *s){
    char n[10];
    printf("\nEnter name : ");
    scanf("%s", n);
    strcpy(s->name, n);
    printf("\nEnter Roll No : ");
    scanf("%d", s->rollno);
    printf("\nEnter total attendance : ");
    scanf("%f", s->attendance);
    return *s;
}

emp input3(emp *e){
    char n[10];
    printf("\nEnter name : ");
    scanf("%s", n);
    strcpy(e->name, n);
    printf("\nEnter salary : ");
    scanf("%d", e->salary);
    return *e;
}

int display(struct student s){
    printf("\n***********************************");
    printf("\nName : %s", s.name);
    printf("\nRoll Number : %d", s.rollno);
    printf("\nAttendance : %.2f", s.attendance);
    printf("\n***********************************\n");
}

int display3(emp e){
    printf("\n***********************************");
    printf("\nName : %s", e.name);
    printf("\nSalary : %d", e.salary);
    printf("\n***********************************\n");
}

int main(){
    // struct student s1;
    // struct student s2;
    // struct student s3 = {0};
    // s1 = input1(&s1);
    // s1 = input2(&s2);
    // display(s1);
    // display(s2);
    // display(s2);

    emp e1;
    input3(&e1);
    display3(e1);
    return 0;
}