#includ<stdio.h>
int armstrong(int n){
    int copy =n;
    int sum =0;
    while(n>0){
        int last_digit = n%10;
        sum =sum+lastdigit*last_digit*last_digit;
        n=n/10;
    }
    if(sum == copy){
        return 1;
    }
    return 0;
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(armstrong(num)){
        printf("%d is an Armstrong number",num);
    }
    else{       
        printf("%d is not an Armstrong number",num);
    }
    return 0;
}
