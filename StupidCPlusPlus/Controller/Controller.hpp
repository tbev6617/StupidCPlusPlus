//
//  Controller.hpp
//  StupidCPlusPlus
//
//  Created by Bevan, Tyler on 1/25/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Controller
{
private:
    //Data members and helper methods
    int specialNumber;
    string favoriteWord;
    int * numberPointer;
protected:
    //Things that need to only be used by subclasses
public:
    //anyone can see this
    Controller();
    void start();
    void doArrayStuff(int size);
    void printArray(int array[], int size);
    void useVector();
};

#endif /* Controller_hpp */

