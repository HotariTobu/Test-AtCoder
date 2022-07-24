#include "zone2021_D.h"

#include <iostream>
#include <fstream>

int main() {
    std::ofstream ofstr("in.txt");
    auto ostrb = std::cout.rdbuf(ofstr.rdbuf());

    entry1();

    std::cout.rdbuf(ostrb);
    ofstr.close();

    return(0);
}