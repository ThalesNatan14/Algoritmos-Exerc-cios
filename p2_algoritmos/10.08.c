#include <stdio.h>
#include <string.h>

void fix_name(char *s){
    for(int i = 0; s[i] != 0; i++){
        if(is_latter(s[i])){
            s[i] = ' ';
        }
    }
    char temp[strlen(s)+1];
    int k = 0;
    for(int i = 0; s[i] != 0; i++){
        if(s[i] != ' '){
            while(s[i] = ' ' && s[i] != 0){
                temp[k]= s[i];
                i++;
                k++;
            }
        }
    }
    temp[k] = ' ';
    printf("temp: [%s]\n", temp);
}

int is_letter(char c){
    return  (c >= 'a' && c <= 'z') ||
            (c >= 'A' && c <= 'Z');
}

char to_upper(char c){
    if(c >= 'a' && c <= 'z'){
        return c - 32;
    }
    return c;
}

int main(){

    char name[] = " JoHN DOE# 23! ";
    fix_name(name);
    is_letter(name);

    return 0;
}