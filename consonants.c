#include<stdio.h>
#include<string.h>
int main(){
    char word[] = "APPLE";
    int count = 0;
    for(int i=0;i<strlen(word);i++){
        if(word[i] != 'A' && word[i] != 'E' && word[i] != 'I' && word[i] != 'O' && word[i] != 'U'){
            count++;
        }
    }
    printf("Number of consonants in %s is %d\n", word, count);
    return 0;
}