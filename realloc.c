#include<stdio.h>
#include<stdlib.h>
int main(){

    // Taking input from the user
    int n;
    printf("Enter the number of elements you want to store: ");
    scanf("%d",&n);
    int *ptr;
    ptr = (int*) calloc(n ,sizeof(int));

// Taking input from the user
    for(int i =0;i<n;i++){
        printf("Enter %d number: ", i+1);
        scanf("%d",&ptr[i]);
    }

// Displaying the elements of the array
    for(int i =0;i<n;i++){
        printf("%d ",ptr[i]);
    }
    printf("\n");

    // Taking new size of the array from the user
    int new;
    printf("Enter the new size of the array: ");
    scanf("%d",&new);

    ptr = realloc(ptr, new); // Reallocating the memory to the new size

    for(int i =n;i<new;i++){
        printf("Enter %d number: ", i+1);
        scanf("%d ",&ptr[i]);
    }

    // Displaying the elements of the array after reallocation
    for(int i =0;i<new;i++){
        printf("%d ",ptr[i]);
    }
    // Freeing the allocated memory
    free(ptr);
    return 0;
}   