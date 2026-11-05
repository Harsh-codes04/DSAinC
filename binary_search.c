#include<stdio.h>

void main(){
    int arr[] = {10, 20, 30, 40, 50};
    int target = 50;
    int start = 0;
    int end = 4;

    while(start<=end){
        int mid;
        mid = (start+end) / 2;

        if(arr[mid] == target){
            printf("Target element foun at %d ",mid+1);
                break;
        }
        else if(arr[mid]<target){
            start++;
        }
        else{
            end--;
        }
    }
}