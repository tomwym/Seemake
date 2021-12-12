#include "Yuji.hpp"

#include <iostream>
#include <string>

namespace SubMod1Space {

Yuji::Yuji()
: name(std::string({"Yuji"})) {
    std::cout << name << " object construted!" << std::endl;
}

Yuji::Yuji(std::string text)
: name(std::string({"Yuji"})) {
    std::cout << "Yuji object construted with " << text << std::endl;
}

}