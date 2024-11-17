#pragma once
 
#include <string>
#include <iostream>
 
class Demo {
private:
    std::string name;
    int *data;
 
public:
    // Constructor with proper initialization (Item 4)
    Demo(const std::string &name, int value);
 
    // Destructor to clean up heap memory
    ~Demo();
 
    // Explicitly override compiler-generated functions (Item 5)
    Demo(const Demo& other);             // Copy constructor
    Demo& operator=(const Demo& other);  // Copy assignment operator
    Demo(Demo&& other) noexcept;         // Move constructor
    Demo& operator=(Demo&& other) noexcept; // Move assignment operator
 
    // Disallow default constructor (Item 6)
    Demo() = delete;
 
    // Disallow copy operations if needed (Item 6)
    // Demo(const Demo& other) = delete;
    // Demo& operator=(const Demo& other) = delete;
 
    void printData() const;
};