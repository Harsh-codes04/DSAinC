#include<stdio.h>

int list[10] = {10,20,30,40,50};
int size = 5;

int insert(int index, int value){
    for(int i = size;i>index;i--){
        list[i] = list[i-1]; 
    }
    list[index] = value;
    size++;
    return 0;
}

void delete(int index){
    for(int i = index ;i<size-1;i++){
        list[i] = list[i+1];
    }
    size--;
}

void display(){
    for(int i =0; i<size;i++){
        printf("%d ",list[i]);
    }
}

int main(){
    insert(1,15);
    printf("Elements after insertion are: ");
    display();
    printf("\n");
    delete(3);
    printf("Element after deletion are: ");
    display();

    return 0;
}