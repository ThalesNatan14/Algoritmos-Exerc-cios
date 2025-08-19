struct contact {
   int id;
   char name[51]; // 50 chars + NULL
   char email[51];// 50 chars + NULL
   int type;
};
typedef struct contact Contact;

void print_contact1(Contact c) {
    printf("%d, %s, %s, %d\n", c.id, c.name, c.email, c.type);
}

void print_contact2(Contact c, int n, char type_names[n][50]) {
    printf("id....: %d\nnome..: %s\nemail.: %s\n", c.id, c.name, c.email);
    printf("tipo..: %s\n\n", type_names[c.type]);
}
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
        int dist = get_hamming_distance(s);

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
typedef struct {
	int id;
	char name[51];
	int type; // [1..10]
} Contact;

int find_by_name(int n, const Contact* vec, const char* find) {
    int count = 0;
    
    const Contact* p = vec;
    for (int i = 0; i < n; i++) {
        if (strstr(p->name, find) != 0) {
            count++;
        }
        p++;
    }

    return count;
}
int main() {
    Contact v[] = {
        {1, "John Doe", 0},
        {2, "Mary Doe", 1},
        {3, "Richard Son", 1},
        {4, "Chris Jansem", 4},
        {5, "Terry Doe", 4},
        {6, "Jane Jansem", 4}
    };
    
    int res = find_by_name(6, v, "Done");
    printf("qtde: %d\n", res);

    return 0;
}