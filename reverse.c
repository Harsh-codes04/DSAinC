#include<stdio.h>
int main(){
    int n;
    printf("Enter a number to reverse: ");
    scanf("%d",&n);
    int rev =0;
    int rem =0;

    while(n){
    rem = n%10;
    rev = (rev*10) + rem;
    n = n/10;
    }
    printf("Reverse of you entered number is: %d",rev);
    return 0;
}