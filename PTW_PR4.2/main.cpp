#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include "Functions.hpp"
using namespace std;

int main()
{
    string filename = "/Users/mac/Desktop/Student/PTW/4/PTW_PR4.2/PTW_PR4.2/t.txt";
    string fileContent = readFile(filename);
    cout << "Count of b = " << count_b(fileContent) << endl;
    return 0;
}
