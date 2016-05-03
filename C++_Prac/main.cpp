//
//  main.cpp
//  C++_Prac
//
//  Created by NAKHOE KIM on 11/28/15.
//  Copyright © 2015 NAKHOE KIM. All rights reserved.
//

#include <iostream>
class IntElement {
public:
    IntElement(int value): next(NULL), data(value) {}  //constructor member init list
    ~IntElement(){}  //destructor
    
    IntElement *getNext() const { return next;}
    int value() const {return data;}
    
    void setNext (IntElement *elem ) {next = elem;}
    void setValue (int value) {data = value;}
    
private:
    IntElement *next;
    int data;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
