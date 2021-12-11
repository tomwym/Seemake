#pragma once

#include <iostream>
#include <string>

namespace SubMod1Space {

template<Typename T>
class Todo {
public:
    Todo();
    Todo(T);
private:
    std::string name;
    T obj;
};

template<Typename T>
Todo<T>::Todo() 
: name({"Todo"}) {
    std::cout << name << " object constructed!" << std::endl;
}

template<Typename T> 
Todo<T>::Todo(T _obj)
: name({"Todo"}), obj(_obj) {
    std::cout << name << " object constructed with alt ctor!" << std::endl;
}

}

