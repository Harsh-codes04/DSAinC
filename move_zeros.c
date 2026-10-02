#include<stdio.h>
int main(){
    int arr[] = {1,0,0,3,4,5,20,30,0,4};

    int j=0;

    for(int i=0;i<10;i++){
        if(arr[i]!=0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}