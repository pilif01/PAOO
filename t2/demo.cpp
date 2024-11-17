#include "demo.h"
 
// Constructor
Demo::Demo(const std::string &name, int value)
    : name(name), data(new int(value)) {
    std::cout << "Constructor called for: " << name << " with value " << *data << std::endl;
}
 
// Destructor
Demo::~Demo() {
    delete data;
    std::cout << "Destructor called for: " << name << std::endl;
}
 
// Copy Constructor
Demo::Demo(const Demo& other)
    : name(other.name), data(new int(*other.data)) {
    std::cout << "Copy constructor called for: " << name << std::endl;
}
 
// Copy Assignment Operator
Demo& Demo::operator=(const Demo& other) {
    if (this != &other) {
        delete data; // Clean up existing data
        name = other.name;
        data = new int(*other.data);
        std::cout << "Copy assignment operator called for: " << name << std::endl;
    }
    return *this;
}
 
// Move Constructor
Demo::Demo(Demo&& other) noexcept
    : name(std::move(other.name)), data(other.data) {
    other.data = nullptr;
    std::cout << "Move constructor called for: " << name << std::endl;
}
 
// Move Assignment Operator
Demo& Demo::operator=(Demo&& other) noexcept {
    if (this != &other) {
        delete data; // Clean up existing data
        name = std::move(other.name);
        data = other.data;
        other.data = nullptr;
        std::cout << "Move assignment operator called for: " << name << std::endl;
    }
    return *this;
}
 
// Print data
void Demo::printData() const {
    std::cout << "Object: " << name << ", Data: " << *data << std::endl;
}