#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char word[] = "APPLE";
    int count = 0;
    for(int i=0;i<strlen(word);i++){
        if(isalpha(word[i]) && word[i] != 'A' && word[i] != 'E' && word[i] != 'I' && word[i] != 'O' && word[i] != 'U' || word[i]!='a' || word[i]!='e' || word[i]!='i' || word[i]!='o' || word[i]!='u' ){
            count++;
        }
    }
    printf("Number of consonants in %s is %d\n", word, count);
    return 0;
}