#include <stdio.h>

int strings_compare(const char str1[], const char str2[]){
    int i = 0, j = 0;
    char t1[50];
    char t2[50];
    while(str1[i] != '\0' && str2[i] != '\0'){
        t1[i] = str1[i];
        t2[i] = str2[i];
        i++;
    }
    t1[i] = '\0';
    t2[i] = '\0';

    for(i = 0; t1[i] != '\0' && t2[i] != '\0'; i++){
        if(t1[i] >= 'a' && t1[i] <= 'z'){
            t1[i] -= 32;
        }
        if(t2[i] >= 'a' && t2[i] <= 'z'){
            t2[i] -= 32;
        }
        if(t1[i] != t2[i]){
            return 0;
        }
    }
    if(t1[i] == '\0' && t2[i] == '\0'){
        return 1;
    } else{
        return 0;
    } 

}


int main(){

    char s1[] = "John Doe Clark# !";
    char s2[] = "JOHN doe cLARk# !";
    int res = strings_compare(s1, s2);
    printf("%d\n", res);

    return 0;
}