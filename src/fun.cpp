// Copyright 2022 UNN-IASR
#include "fun.h"


unsigned int faStr1(const char *str) {
    int words_amount = 0;
    bool separator = false;
    int i = 0;
    while (str[i]) {
        if (separator == false && str[i] != ' ') {
            int k = i;
            int only_letters = i;
            while (str[k] != ' ') {
                if (isalpha(str[k])) {
                    only_letters++;
                }
                k++;
            }
        if (only_letters == k) {
            words_amount++;
        }
        separator = true;
        } else if (separator == true && str[i] == ' ') {
            separator = false;
        }
        i++;
    }
    return words_amount;
}

unsigned int faStr2(const char *str) {
    int words_amount = 0;
    bool separator = false;
    int i = 0;
    while (str[i]) {
        if (separator == false && str[i] != ' ') {
            if (isalpha(str[i]) && (str[i] == toupper(str[i]))
            && str[i] >= 'A' && str[i] <='Z') {
                int k = i+1;
                int letters = i+1;
                while (str[k] != ' ') {
                    if (str[k] == tolower(str[k]) && str[k] >= 'a'
                    && str[k] <='z') {
                        letters++;
                    }
                k++;
                }
                if (letters == k) {
                    words_amount++;
                }
            }
            separator = true;
        } else if (separator == true && str[i] == ' ') {
            separator = false;
        }
        i++;
    }
    return words_amount;
}

unsigned int faStr3(const char *str) {
    int words_amount = 0;
    bool separator = false;
    int i = 0;
    int all_chars = 0;
    while (str[i]) {
        if (separator == false && str[i] != ' ') {
            separator = true;
            words_amount++;
        } else if (separator == true && str[i] == ' ') {
            separator = false;
        }
        if (str[i] != ' ') {
            all_chars++;
        }
        i++;
    }
    int average_word_length = round(all_chars/words_amount);
    return average_word_length;
}
