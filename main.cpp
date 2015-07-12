//
//  main.cpp
//  Combination generator
//
//  Created by Michal Tyrlik on 7/12/15.
//  Copyright (c) 2015 Michal Tyrlik. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int numchars = 62; //match with # of elements in the array below
char chars[62] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','1','2','3','4','5','6','7','8','9','0'};

int maxlength;
string comb;

int main()
{
    cout << "Enter maximum length: " << endl;
    cin >> maxlength;
    
    for(int l = 1; l < maxlength; l++)
    {
        for(int j = 0; j < numchars; j++)
        {
            for(int k = 0; k < numchars; k++)
            {
                
            }
        }
    }
    
    return 0;
}
