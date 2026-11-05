#include<stdio.h>


//Use for swaping our numbers in the array
void reverse(int arr[], int start, int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

//used to rotate arry based on condition
void leftrotate(int arr[],int n,int k){
    if(n<=0){
        return;
    }
    k = k %n;

    //reverse first k elements
    reverse(arr,0,k-1); //it swap only first two indexes if k = 2 so we use here - 1.
    //reverse the remaining elements
    reverse(arr,k,n-1);    // it swaps all ements after swaping first k elements. from 2 to size of array
    //reverse all array
    reverse(arr,0,n-1);  //it swaps all elements from 0 to size on array
}

void rightrotate(int arr1[],int n,int k){
    if(n<=0){
        return;
    }

    k = k%n;
    
    reverse(arr1,n-k,n-1);
    reverse(arr1,0,n-k-1);
    reverse(arr1,0,n-1);
}

int main(){
  int arr[] = {10,20,30,40,50,60};
   int arr1[] = {10,20,30,40,50,60};

  int n = sizeof(arr)/sizeof(arr[0]);

  int k = 2;

  printf("Original array:");
  for(int i = 0;i<n;i++){
    printf("%d ",arr[i]);
  }

  leftrotate(arr,n,k);

   printf("\nArray after left rotation array:");
  for(int i =0;i<n;i++){
    printf("%d ",arr[i]);
  }

   rightrotate(arr1,n,k);

   printf("\nArray after right rotation array:");
  for(int i =0;i<n;i++){
    printf("%d ",arr1[i]);
  }

  printf("\n");

  return 0;
}
