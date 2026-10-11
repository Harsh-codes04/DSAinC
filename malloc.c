#include<stdio.h>
#include<stdlib.h>
int main(){

    int n;
    printf("Enter the number of emenets you want to store: ");
    scanf("%d",&n);
    int *ptr;
    ptr = (int *) malloc(n * sizeof(int));

    for(int i =0; i< n; i++){
        printf("Enter %d number: ", i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i =0 ;i<n;i++){
        printf("%d ",ptr[i]);
    }
    free(ptr);
    return 0;
}