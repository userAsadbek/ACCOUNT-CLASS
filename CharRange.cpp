#include <iostream>
#include <cctype>
#include "CharRange.h"
using namespace std;
CharRange::CharRange(char start,char end){ 
    lower=toupper(start);
    upper=toupper(end);
}
char CharRange::getChar(){ 
    cin.get(input);
    cin.ignore();
    input=toupper(input);
    while(input<lower||input>upper) {
        cout<<"Invalid input. Please enter a character between "<<lower<<" and "<<upper<<": ";
        cin.get(input);
        cin.ignore();
        input=toupper(input);
    }
    return input;}
