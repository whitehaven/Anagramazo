//
//  main.cpp
//  Anagramazo
//
//  Created by Alex Crist on 7/16/14.
//  Copyright (c) 2014 White Haven Informatics. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <set>
#include "SetDictionary.h"

int main(int argc, const char * argv[])
{
    ifstream fin;
    
    set<string> Dictionary = createDictionary(fin, argv[1]);
    
    int count = 0;
    for ( set<string>::iterator iterset = Dictionary.begin(); iterset != Dictionary.end(); iterset++ )
    {
        cout << count << " ";
        cout << *iterset << endl;
        count++;
    }
    
    return 0;
}

