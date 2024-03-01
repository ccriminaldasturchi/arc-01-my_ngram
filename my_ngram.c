#include <stdio.h>
#include <ctype.h>

#define MAX_CHARS 256

int main(int argc, char *argv[]) {
    int char_counts[MAX_CHARS] = {0};

    for (int i = 1; i < argc; i++) {
        char *str = argv[i];

        while (*str) {
            char ch = tolower(*str);
            if (isalnum(ch)) { 
                char_counts[ch]++;
            }
            str++;
        }
    }

    for (int ch = 0; ch < MAX_CHARS; ch++) {
        if (char_counts[ch] > 0) {
            printf("%c:%d\n", ch, char_counts[ch]);
        }
    }

    return 0;
}
