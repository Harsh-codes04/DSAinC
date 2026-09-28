#include<stdio.h>
int print_1_N(int n){
    if(n == 0){
        return 0;
    }

    print_1_N(n-1);
    printf("%d ",n);
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    print_1_N(num);
    return 0;
}