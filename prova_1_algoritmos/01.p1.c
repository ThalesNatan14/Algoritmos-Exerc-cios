#include <stdio.h>
#include <string.h>

void remove_palindrome(char str[]){
    int i = 0;
    int len = strlen(str);
    int palin = 1;
    char copy[strlen(str)+1];
    while(str[i] != '\0'){
        copy[i] = str[i]; 
        i++;
    }
    
    copy[i] = '\0';

    for(i = 0; i < len -1; i++){
        if(str[i] != copy[i]){
            palin = 0;
            break;
        }
    }
    if(palin){
        str[len/2] = '\0';
    }
    

}

int main(){

    char text[] = "texto ok!!ko otxet";
    remove_palindrome(text);
    printf("%s", text);

    return 0;
}