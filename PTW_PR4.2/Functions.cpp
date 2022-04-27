#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include "Functions.hpp"
using namespace std;

string readFile(string path) {
    string s;
    getline(ifstream(path), s, '\0');
    return s;
}

int count_b(string s)
{
    unsigned int count = 0;
    if (s[0] == 'b')
    {
        count++;
    }
    for (unsigned int i = 0; i < s.length(); i++)
    {
        if ((s[i] == ' ' || s[i] == '\n') && s[i+1] == 'b')
           {
               count++;
           }
    }
    return count;
}
