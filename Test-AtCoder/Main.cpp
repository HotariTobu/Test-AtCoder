#include "zone2021_D.h"

#include <iostream>
#include <fstream>
#include "Main.h"

int main() {
    initgetchar();
    std::ifstream ifstr("in.txt");
    std::ofstream ofstr("out.txt");

    auto istrb = std::cin.rdbuf(ifstr.rdbuf());
    auto ostrb = std::cout.rdbuf(ofstr.rdbuf());

    int time = clock();

    entry1();
    
    printf("%dミリ秒", clock() - time);

    std::cin.rdbuf(istrb);
    std::cout.rdbuf(ostrb);

    closegetchar();
    ifstr.close();
    ofstr.close();

    return(0);
}