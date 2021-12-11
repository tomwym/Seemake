#include "Yuji.hpp"

#include <iostream>
#include <string>

namespace SubMod1Space {

Yuji::Yuji()
: name({"Yuji"})
    std::cout << name << " object construted!" << std::endl;
}

Yuji::Yuji(std::string text)
: name({"Yuji"}) {
    std::cout << "Yuji object construted with " << text << std::endl;
}

}