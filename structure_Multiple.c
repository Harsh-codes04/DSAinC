#include<stdio.h>
#include<string.h>
struct Student {
    char name[100];
    int age;
    int roll_no;
    char gender[10];
    char class[10];

};

int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for(int i=0; i<n; i++){
        printf("Enter details for student %d:\n", i+1);
        printf("Name: ");
        scanf("%99s", students[i].name);
        
        printf("Age: ");
        scanf("%d", &students[i].age);
        // printf("\n");
        printf("Roll No:");
        scanf("%d", &students[i].roll_no);
        // printf("\n");
        printf("Gender: ");
        scanf("%9s", students[i].gender);
        // printf("\n");
        printf("Class: ");
        scanf("%9s", students[i].class);
        // printf("\n");
    }

    Printf("\nStudent Details:\n");
    for(int i=0; i<n; i++){
        printf("Student %d:\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Gender: %s\n", students[i].gender);
        printf("Class: %s\n", students[i].class);
    }

    return 0;
}