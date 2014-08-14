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

bool prefixExists( string prefix, set<string> & Dictionary)
{
    string minusWord = prefix;
    minusWord[minusWord.length()-1]++;
    
    // does not exist - would be a failing condition in an anagram finder, etc.
    if ( Dictionary.lower_bound(prefix) == Dictionary.lower_bound(minusWord) )
        return false;
    else
        return true;
}

void solveAnagram ( int position, string sourceWord, string buildingWord, set<string> & Dictionary)
{
    
    
    return;
}

string readWordstoAnagram()
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
    
    // process down inputted word by stripping spaces
    string sourceWord = readWordstoAnagram();

    

    
    
    
    for (int i = 0; i < sourceWord.size(); i++ )
    {
        solveAnagram( i, sourceWord, "", Dictionary);
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

