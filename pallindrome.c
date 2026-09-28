#include<stdio.h>
int main(){
    int n;
    printf("Enter number to check pallindrome:");
    scanf("%d",&n);

    int copy =n;
    int ans =0;
    int rem;

    //reverse
    while(n){
        rem = n%10; //lastdigit
        ans = ans*10 + rem;
        n = n/10;
    }
    if(copy == ans){
        printf("Number is Pallindrome.");
    }
    else{
        printf("Not pallindrome.");
    }
    return 0;
}