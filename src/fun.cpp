// Copyright 2022 UNN-IASR
#include "fun.h"
#include <cctype>
#include <math.h>   

unsigned int faStr1(const char *str) {
    // Разработать функцию на языке С++, которая в переданной строке определяет слова, не содержащие цифр и подсчитывает количество таких слов.
    int words_amount = 0;
    bool separator = false;
    int i = 0;
    while (str[i])
    {
        if(separator == false && str[i] != ' ' && isalpha(str[i]))
        {
            separator = true;
            words_amount++;
        }
        else if (separator == true && str[i] == ' ')
            separator = false;
        i++;
    }
    return words_amount;
}

unsigned int faStr2(const char *str) { 
    // Разработать функцию на языке С++, которая в переданной строке подсчитывает количество слов, 
    // начинающиеся на заглавную латинскую букву, а среди других символов этих слов только латинские строчные буквы.
    int words_amount = 0;
    bool separator = false;
    int i = 0;
    while (str[i])
    {
        if(separator == false && str[i] != ' ' && isalpha(str[i]) && str[i] == toupper(str[i]) && str[i] >= 'A' && str[i] <='Z')
        {
            int k = i;
            int all_chars = i;
            while (str[k] != ' ')
            {
                if (str[k] == tolower(str[k]) && str[i] >= 'a' && str[i] <='z')
                {
                    k++;
                }
                all_chars++;
            }
            if (all_chars == k)
            {
                separator = true;
                words_amount++;
            }
        }
        else if (separator == true && str[i] == ' ')
            separator = false;
        i++;
    }
    return words_amount;
}

unsigned int faStr3(const char *str) {
    // Разработать функцию на языке С++, которая находит среднюю длину слова в строке, округляя ее до целого значения по правилам округления.
    int words_amount = 0;
    bool separator = false;
    int i = 0;
    int all_chars = 0;
    while (str[i])
    {
        if(separator == false && str[i] != ' ')
        {
            separator = true;
            words_amount++;
        }
        else if (separator == true && str[i] == ' ')
            separator = false;
        if (str[i] != ' ')
            all_chars++;
        i++;
    }
    int average_word_length = round(words_amount/all_chars);
    return average_word_length;
}
