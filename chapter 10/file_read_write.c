 #include<stdio.h>

 int main(){
    FILE *ptr1, *ptr2;
    int n1, n2;
    // ptr1 = fopen("Old_File.txt", "r+"); read + write
    // ptr1 = fopen("Old_File.txt", "w+"); read + write generated automatically if does not exist
    // ptr1 = fopen("Old_File.txt", "a+"); append + read + write
    // ptr1 = fopen("Old_File.txt", "r");
    
    if(ptr1 == NULL){
        printf("File does not exist !\n");
    }
    else{
        printf("File exists");
        fscanf(ptr1, "%d", &n1);
        printf("\nFirst Number : %d", n1);
        fscanf(ptr1, "%d", &n2);
        printf("\nSecond Number : %d", n2);

        fclose(ptr1);
    }

    ptr2 = fopen("New_File.txt", "w"); //It will generate the file if it does not exist
    fprintf(ptr2, "Sum : %d\n",(n1+n2));

    // rewind(ptr1); // This will return pointer to the beginning of the file
    fclose(ptr2);
    return 0;
 }