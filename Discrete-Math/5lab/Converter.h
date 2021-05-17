#ifndef CONVERTER_H_INCLUDED
#define CONVERTER_H_INCLUDED
#include <iostream>
#include <string>
#include <stack>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdlib>
using namespace std;

class Converter
{
public:
Converter(){};
~Converter(){};
string InfixToPostfix(string *data , int size);
string InfixToPrefix(string *data , int size);
string PostfixToInfix(string *data , int size);
string PrefixToInfix(string *data , int size);
string PrefixToPostfix(string *data , int size);
int priority ( char c );
string PostfixToPrefix(string *data , int size);
double makeoperation(double num1 , double num2 , char op);
double calcpref(string *data , int size);
double calcpost(string *data , int size);


};


#endif // CONVERTER_H_INCLUDED
