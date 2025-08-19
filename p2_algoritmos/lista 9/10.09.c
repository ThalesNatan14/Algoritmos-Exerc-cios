#include <stdio.h>
#include <strings.h>
//questão 08 da lista 09

struct contact {
   int id;
   char name[51]; // 50 chars + NULL
   char email[51];// 50 chars + NULL
   int type;
};
typedef struct contact Contact;

int get_hamming_distance(const char* str1, const char* str2) {
    if (strlen(str1) != strlen(str2))
        return -1;

    int dist = 0;
    const char *p1 = str1;
    const char *p2 = str2;

    while (*p1 != 0) {
        if (*p1 != *p2)
            dist++;
        p1++;
        p2++;
    } 
    return dist;
}

char* find_most_similar(const char* str, int n, char words[n][50]) {
    int min = 50;
    int min_str = 0;

    for (int i = 0; i < n; i++) {
        int dist = get_hamming_distance(str, words[i]);
        if (dist != -1 && dist < min) {
            min = dist;
            min_str = i;
        }
    }

    return words[min_str];
}

int main(){

   /* Contact v[] = {
        {1, "John Doe", 0},
        {2, "Mary Doe", 1},
        {3, "Richard Son", 1},
        {4, "Chris Jansem", 4},
        {5, "Terry Doe", 4},
        {6, "Jane Jansem", 4}
    };
   */ 
    char words[][50] = {"batati", "savata", "cabana", "haluha"};
    
    char* most_similar = find_most_similar("banana", 4, words);
    printf("%s\n", most_similar);

    return 0;
}