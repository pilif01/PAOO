#include "demo.h"
 
int main() {
    Demo demo1("First", 10);  // Proper initialization
    Demo demo2("Second", 20);
 
    // Demonstrate copy
    Demo demo3 = demo1;
 
    // Demonstrate move
    Demo demo4 = std::move(demo2);
 
    // Use copy assignment
    demo3 = demo1;
 
    // Use move assignment
    demo4 = std::move(demo3);
 
    demo1.printData();
    demo4.printData();
 
    return 0;
}