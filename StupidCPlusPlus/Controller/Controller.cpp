//
//  Controller.cpp
//  StupidCPlusPlus
//
//  Created by Bevan, Tyler on 1/25/18.
//  Copyright © 2018 Bevan, Tyler. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    for (int index = 1; index <= 10; index++)
    {
        cout <<"this loop has executed " << index << " times" << endl;
    }
}
void Controller :: doArrayStuff(int size)
{
    int numbers[size];
    for(int i = 0; i < size; i++)
    {
        numbers[i] = (i + 1) * 10;
    }
    cout << "I made you an array" << endl;
    printArray(numbers, size);
    cout << "You're welcome!" << endl;
}
void Controller :: printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}
