#include<stdio.h>
int main(){

    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    int even = 0;
    int odd = 0;

    while(n>0){
        int lastdigit = n%10;
        if(lastdigit%2==0){
            even++;
        }
        else{
            odd++;
        }
        n=n/10;
    }
    printf("Even: %d",even);
    printf("\n");
    printf("Odd: %d",odd);
    return 0;
}
