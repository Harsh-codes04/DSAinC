#include<stdio.h>
int majority_elements(int* num,int numSize){
    for(int i =0; i<numSize;i++){
        int count = 0;
        for(int j = 0;j<numSize;j++){
            if(num[i]==num[j]){
                count++;
            }
        }
        if(count>=numSize/2){
            return num[i];
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
    int result = majority_elements(nums,n);
    printf("Majority element: %d", result); 
}