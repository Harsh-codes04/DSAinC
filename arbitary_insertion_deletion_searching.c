#include<stdio.h>

#define MAX 100

int list[MAX];
int size = 0;


//function to insert element
void insert(int index, int value){
    if(size == MAX){
        printf("List is full \n");
        return ;
    }
    if(index<0 || index > size){
        printf("Invalid index ! \n");
        return ;
    }
    for(int i = size; i > index;i--){
        list[i] = list[i - 1];
    }
    list[index] = value;
    size++;
    printf("Elements inserted successfully.. \n");
}

void delete(int value){
    int found = 0;
    int i;
    for(i = 0; i<size;i++){
        if(list[i] == value){
            found = 1;
            break;
        }
    }

    if(found == 0){
        printf("Element not found \n");
        return ;
    }

    for(int j = i;j<size-1;j++){
        list[j] = list[j+1];
    }
    size--;
    printf("Element deleted successfully.. \n");
}

//function to display all elements

void traverse(){
    int i;
    if(size == 0){
        printf(" list is Empty \n");
        return;
    }
    printf("List elements are: ");
    for(i = 0;i<size;i++){
        printf("%d ",list[i]);
    }
    printf("\n");
}

// main function
int main(){
    insert(0,10);
    insert(1,20);
    insert(2,30);
    insert(3,40);
    insert(4,50);
    insert(5,60);

    delete(30);

    traverse();

    return 0;

}

