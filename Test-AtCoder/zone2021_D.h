#pragma once

#include <iostream>
#include <deque>

using namespace std;

int entry1() {
    string s;
    cin >> s;

    deque<char> t;
    bool r = false;
    for (char c : s) {
        if (c == 'R') r = !r;
        else if (r) {
            if (t.size() && c == t.front()) t.pop_front();
            else t.push_front(c);
        }
        else {
            if (t.size() && c == t.back()) t.pop_back();
            else t.push_back(c);
        }
    }

    if (r) reverse(t.begin(), t.end());
    auto ite = t.cbegin(), end = t.cend();
    for (; ite != end; ite++) {
        cout << (*ite);
    }

    return 0;
}


#include <vector>

int entry2() {
    vector<char> t;
    char c;
    do {
        c = getchar();
        if (c == 'R') {
            reverse(t.begin(), t.end());
        }
        else {
            t.push_back(c);
        }
    } while (c != '\n');
    t.insert(t.begin(), '\n');

    int i1 = 0, i2 = 1, l = t.size();
    char* p1 = t.data();
    char* p2 = p1 + 1;
    while (*p2 != '\n') {
        if (*p1 == *p2) {
            *p1 = *p2 = 0;

            while (*p1 == 0) {
                p1--;
            }
            do {
                p2++;
            } while (*p2 == 0);
        }
        else {
            p1 = p2;
            do {
                p2++;
            } while (*p2 == 0);
        }
    }

    if (t.empty()) {
        return 0;
    }

    auto ite = t.begin() + 1, end = t.end() - 1;
    char r;
    for (; ite != end; ite++) {
        r = (*ite);
        if (r != 0) {
            cout << r;
        }
    }

    return 0;
}