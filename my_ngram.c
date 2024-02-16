#include "my_ngram.h"
#include <stdio.h>

void count_characters(const char *text) {
    int count[256] = {0};
    
    for (int i = 0; text[i] != '\0'; ++i) {
        if (text[i] >= 0 && text[i] < 256) {
            count[(int)text[i]]++;
        }
    }
    
    for (int i = 0; i < 256; ++i) {
        if (count[i] > 0) {
            printf("%c:%d\n", (char)i, count[i]);
        }
    }
}
