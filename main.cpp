/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: aparsons
 *
 * Created on October 26, 2017, 12:50 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
int a = 8, b = 0, c = 0; cin >> b;
try {
    if(b == 0)
    {
        throw string("b");
    }
c = a / b;
cout<< c <<endl;
}
catch(string & exp)
{
 cout << "Not a vaild number to divide by" << endl;
}
return 0; }

