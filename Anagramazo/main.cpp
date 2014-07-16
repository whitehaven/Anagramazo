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
#include <vector>

#include "SetDictionary.h"

using namespace std;

set<string> Anagrams;

void solveAnagram ( int position, string sourceWord, set<string> & Dictionary, vector<bool> isUsed)
{
    //if repeat letter, die
    if ( isUsed[position] )
        return;
    //if word exists but can't go on, try space and continue
    
    //if all letters are used and words up to now have existed, write to Anagrams
    
    //send solveAnagram to all other positions on the string
    
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

    // initialize vector to see if letters are already used
    vector<bool> isUsed;
    for( int i = 0; i < sourceWord.size(); i++ )
        isUsed.push_back(false);
    
    
    
    for (int i = 0; i < sourceWord.size(); i++ )
    {
        solveAnagram(i, sourceWord, Dictionary, isUsed );
    }
    
    
    cout << "Source word was \"" << sourceWord << "\"" << endl << endl;;
    cout << "Anagrams discovered:" << endl;
    int count = 0;
    
    for ( set<string>::iterator iterset = Anagrams.begin(); iterset != Anagrams.end(); iterset++)
    {
        count++;
        cout << count << " " << *iterset << endl;
    }
    
    if ( count == 0 )
        cout << "NO ANAGRAMS DETECTED" << endl;
    
    return 0;
}

