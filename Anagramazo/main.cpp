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

using namespace std;

void solveAnagram ()
{
    return;
}

string readWords()
{
    string sourceWord;
    
    // take up sourceWord
    cout << "Find anagrams for: ";
    getline( cin, sourceWord );
    
    // remove spaces
    for( int i = 0; i < sourceWord.size(); i++ )
    {
        if( sourceWord[i] == ' ' )
        {
            sourceWord.erase(i,1);
            i--;
        }
    }
    return sourceWord;
}

int main(int argc, const char * argv[])
{
    ifstream fin;
    
    // creates dictionary with first command line arg
    set<string> Dictionary = createDictionary(fin, argv[1]);
    

    string sourceWord = readWords();

    
    cout << sourceWord << endl;
    
    return 0;
}

