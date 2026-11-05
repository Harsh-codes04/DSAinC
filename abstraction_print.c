#include<stdio.h>
#include "abstract.h"

int main(){
    int arr[10] = {11, 12, 13, 14, 15, 16};
    int size = sizeof(arr)/sizeof(arr[0]);
    int pos = 2;
    int val = 13;
    // insert(arr,size,pos,val);
    delete(arr,size,pos);
    printarray(arr,size);

    return 0;
}