#include<stdio.h>
int main(){
    char word[] = "Hello World";
    int count =0;

    for(int i=0; word[i] != '\0'; i++){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
            count++;
        }
    }
    printf("Number of vowels in the string: %d", count);
}