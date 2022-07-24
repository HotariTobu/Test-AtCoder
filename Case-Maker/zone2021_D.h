#pragma once

#include <iostream>

using namespace std;

int entry1() {
    for (int i = 0; i < 500000; i++) {
        if (rand() % 10 == 0) {
            cout << 'R';
        }
        else {
            cout << (char)(rand() % 26 + 'a');
        }
    }
    cout << '\n';
    return 0;
}