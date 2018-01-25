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

class Controller
{
private:
    //Data members and helper methods
protected:
    //Things that need to only be used by subclasses
public:
    //anyone can see this
    Controller();
    void start();
};

#endif /* Controller_hpp */

