#include <iostream>

int main() {
    int x = 5;
    int* p = &x;
    
    std::cout << x << std::endl;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;

    p = nullptr;

    std::cout << p << std::endl;
    std::cout << *p << std::endl;

    // 変数からポインタを得る　→ &x
    // ポインタから値を得る　　→ *p

    //const int* q = &x;
    //*q = 10;
    // *の前にconstを付けるとポインタが指し示す値を書き換えNG
    
    //int* const q = &x;
    //q = nullptr;
    // *の後にconstを付けるとポインタ自身を書き換えNG

    //const int* const q = &x;
    // 併用可

    return 0;
}
