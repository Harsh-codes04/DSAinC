#include<stdio.h>
#include<string.h>
int main(){
    char word[] = "APPLE";
    int count = 0;

    for (int i = 0; word[i] != '\0'; i++) {
        count++;
    }
    printf("String length using loop: %d \n", count);
    int a = strlen(word);
    printf("String length using strlen: %d \n", a);
    printf("String length using strlen: %d \n", strlen(word));
    printf("String %s", word);
    return 0;
}