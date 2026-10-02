#include<stdio.h>
int singleNumber(int* nums, int numSize){
for(int i=0; i<numSize; i++){
    int count = 0;
    for(int j=0; j<numSize; j++){
        if(nums[i]==nums[j] && i!=j){
            count++;
        }
    }
    if(count==0){
        return nums[i];
    }
}
    return -1;
}

int main(){
    int n; //size of array
    printf("Enter size of array: ");
    scanf("%d",&n);

    int nums[n];  
    printf("Enter elements of array: ");

    //loop to input array elements
    for(int i=0;i<n;i++){
    scanf("%d",&nums[i]);  //Elements of array
    }

    int result = singleNumber(nums,n); //Function call
    printf("Single element: %d ",result);
return 0;
}