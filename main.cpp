//
//  main.cpp
//  CracklePop
//
//  Created by EshaO on 11/25/13.
//  Copyright (c) 2013 EshaO. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string C = "Crackle"; //if # is divisible by 3
    string P = "Pop"; //if # is divisible by 5
    
    for ( int i = 1; i <= 100; i++){
        if ( i%5 == 0 && i%3 == 0 ) {cout <<C <<P <<endl;}
        else if (i%5 == 0) { cout <<"\t" <<P;}
        else if (i%3 == 0) { cout <<" " <<C;}
        cout <<"\t";
    }
    return 0;
}

