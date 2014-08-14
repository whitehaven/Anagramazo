//
//  SetDictionary.h
//  Anagramazo
//
//  Created by Alex Crist on 7/16/14.
//  Copyright (c) 2014 White Haven Informatics. All rights reserved.
//

#ifndef Anagramazo_Header_h
#define Anagramazo_Header_h

#include <fstream>
#include <set>

using namespace std;

set<string> createDictionary( ifstream & fin, const char * dictfile)
{
    set<string> Dictionary;
    
    fin.open( dictfile );
    
    string tempword;
    
    while ( getline( fin, tempword ) )
    {
        //decapitalize
        
        for ( int i = 0; i < tempword.length(); i++ )
        {
            if ( tempword[i] >= 'A' && tempword[i] <= 'Z' )
            {
                tempword[i] += 'a' - 'A';
            }
        }
        
        Dictionary.insert(tempword);
    }
    
    fin.close();
    
    return Dictionary;
}

#endif
