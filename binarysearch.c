#include<stdio.h>

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int target = 40;
    int start = 0;
    int end = 4;

    while(start<=end){
        int mid = start+end / 2;

        if(arr[mid] == target){
            printf("Target element foun at %d ",mid);
                break;
        }
        else if(arr[mid]<target){
            end--;
        }
        else{
            start++;
        }
    }
    return 0;
}