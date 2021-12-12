#include "Seemake.hpp"

#include <iostream>
#include <string>

int main() {
    SubMod1Space::Todo<int> Todo1;
    SubMod1Space::Todo<std::string> Todo2(std::string({"yes"}));
    std::cout << std::endl;

    SubMod1Space::Yuji Yuji1;
    SubMod1Space::Yuji Yuji2("hello@");
    std::cout << std::endl;

    SubMod2Space::Yuta Yuta1;
    Yuta1.yes();
    Yuta1.Rika::hello();
    Yuta1.hello();

    return 0;
}