#include <iostream>
#include "String.h"

int main()
{
    String s1;
    String s2(10);
    String s3("Hello");

    char* cs = new char[6];
    strcpy_s(cs, 6, "World");

    String s4(cs);
    String s5('*', 10);

    s1.Print();
    std::cout << "\n";
    
    s2.Print();
    std::cout << "!\n";

    s3.Print();
    std::cout << "\n";

    s4.Print();
    std::cout << "\n";

    s5.Print();
    std::cout << "\n";

    (s3 + s4).Print();
    //std::cout << "\n";
}
