#include <stdio.h>
#include <string.h>

int searchInStrings(char str[],char target);

int main(){
    char str[50];
    printf("Enter a string:");
    scanf("%s",str);

    char letter;
    printf("Enter the character to be searched:");
    scanf(" %c",&letter);

    int ans = searchInStrings(str,letter);
    if(ans == -1){
        printf("The desired letter does not exist in the given string");
    } else{
        printf("The desired letter is present at index numbered: %d of the given string",ans);
    }

    return 0;
}

int searchInStrings(char str[],char target){
    for(int i=0; i<strlen(str); i++){
        if(str[i] == target){
            return i;
        }
    }
    return -1;
}