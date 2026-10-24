#include<stdio.h>

struct Student{
int PRN;
char Name[50];
float Marks;
float CGPA;
};

int main(){
struct Student s[5] = {
    {101,"Harsh",85,8.2},
    {102,"Aniket",78,6.8},
    {103,"Rahul",82,7.5},
    {104,"Rutvik",90,9.2},
    {105,"Vardhan",70,6.5}
};
int i;
float sum = 0, average ;

printf("Students with CGPA greater than 7.0: \n");

for(i=0;i<5;i++){
    if(s[i].CGPA>7.0){
        printf("PRN: %d \n",s[i].PRN);
        printf("Name: %s \n",s[i].Name);
        printf("CGPA: %2f \n \n",s[i].CGPA);
    }
    sum = sum + s[i].CGPA;
}
average = sum /5;

printf("Overall class average CGPA = %2f \n", average);

return 0;
}