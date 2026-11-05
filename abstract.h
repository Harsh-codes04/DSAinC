//insertion 
void insert(int *arr,int size, int pos, int val){
    for(int i = size;i>=pos;i--){
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    size++;
}

//deletion
void delete(int *arr, int size,int pos){
    for(int i = pos; i<size;i++){
        arr[i]= arr[i+1];
    }    
    size--;
}


//printing array
void printarray(int *arr, int n){
    for(int i = 0;i<n; i++){
        printf("%d ",arr[i]);
    }
}
