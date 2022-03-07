// Copyright 2022 UNN-IASR
#include <iostream>
#include "fun.h"


int main() {
    using std::cout;
    const char* string = "My favorite programming language is Python3";
    int result1 = faStr1(string);
    int result2 = faStr2(string);
    int result3 = faStr3(string);
    cout << result1;
    cout << result2;
    cout << result3;
    return 0;
}
