#include <iostream>
#include "MyClass.h"

MyClass::MyClass(int a) {
    // Constructor implementation (if needed)
    a=10;
    std::cout << "Constructor called with value: " << a << std::endl;
}

void MyClass::showMessage() {
    std::cout << "Hello from MyClass!" << std::endl;
}
