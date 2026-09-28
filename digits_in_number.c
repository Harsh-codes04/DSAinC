#include<stdio.h>
int digits_in_number(int n){
    if(n == 0){
        return 0;
    }

    return 1 + digits_in_number(n/10);
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Digits in number: %d",digits_in_number(num));
    return 0;
}