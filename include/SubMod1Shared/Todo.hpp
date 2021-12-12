#pragma once

#include <iostream>
#include <string>

namespace SubMod1Space {

template<typename T>
class Todo {
public:
    Todo();
    Todo(const T&);
    std::string name;
    T getObj();
protected:
    T obj;
};

template<typename T>
Todo<T>::Todo() 
: name(std::string({"Todo"})), obj(0) {
    std::cout << name << " object constructed with default ctor!" << std::endl;
}

template<typename T> 
Todo<T>::Todo(const T& _obj)
: name(std::string({"Todo"})), obj(_obj) {
    std::cout << name << " object constructed with alt ctor!" << std::endl;
}

template<typename T>
T Todo<T>::getObj() {
    return obj;
}

}