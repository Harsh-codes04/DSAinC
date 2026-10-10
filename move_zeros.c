#include<stdio.h>
//Moving zeros to last function
void move_zeros(int* nums, int numSize){
for(int i=0; i<numSize; i++){
for(int j=i+1; j<numSize; j++){
if(nums[i] == 0){
int swap = nums[j];
nums[j] = nums[j];
nums[j] = swap;
}
}
}
}
//Array printing function
void printarray(int* num,int n){
for(int i =0;i<n;i++){
printf("%d",num[i]);
}
int main(){
int n;
printf(“Enter size of array: “);
scanf(“%d”, &n);   //Size of array
int num[n];
printf(“Enter elements of array: );
//Loop to input elements of array
for(int i=0;i<n;i++){
scanf(“%d” &num[i]);
}
move_zeros(num,n); //function call
printarray(num,n);  //function call
return 0;
}
