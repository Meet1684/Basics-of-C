#include<stdio.h>

int main(){
    int rows;
    int columns;
    printf("Rows : ");
    scanf("%d\n", &rows);
    printf("Columns : ");
    scanf("%d\n", &columns);
    int arr[rows][columns];

    for(int i=0;i<rows;i++) {
        printf("\nStudent %d\n", i+1);
        for(int j=0;j<columns;j++) {
            printf("\nSubject %d : ", j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < columns; ++j) {
            printf("%d", *(&arr[i][j]));
        }
        printf("\n");
    }
}