#include<stdio.h>
#include<string.h>
struct Student {
    char name[100];
    int age;
    int roll_no;
    char gender;
    char class;

};

int main(){
    struct Student s1;
    strcpy(s1.name, "Harsh Chendake");
    s1.age = 20;
    s1.roll_no = 1;
    s1.gender = 'M';
    s1.class = '10';

    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Roll No: %d\n", s1.roll_no);
    printf("Gender: %c\n", s1.gender);
    printf("Class: %c\n", s1.class);

    return 0;
}