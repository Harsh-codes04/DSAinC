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
    struct Student s1;
    strcpy(s1.name, "Harsh Chendake");
    s1.age = 20;
    s1.roll_no = 1;
    strcpy(s1.gender, "Male");
    strcpy(s1.class, "10th");

    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Roll No: %d\n", s1.roll_no);
    printf("Gender: %s\n", s1.gender);
    printf("Class: %s\n", s1.class);

    struct Student s2;
    strcpy(s2.name, "Aniket Koli");
    s2.age = 21;
    s2.roll_no = 2;
    strcpy(s2.gender, "Male");
    strcpy(s2.class, "10th");

    printf("Name: %s\n", s2.name);
    printf("Age: %d\n", s2.age);
    printf("Roll No: %d\n", s2.roll_no);
    printf("Gender: %s\n", s2.gender);
    printf("Class: %s\n", s2.class);

    return 0;
}