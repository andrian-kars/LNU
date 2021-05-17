#include "Converter.h"
#include "Listt.h"
#include <string>
string Converter::InfixToPostfix(string *data , int size)
{
 stack<string> op;
 string result , cur , temp;
 char current;
 for(int i = 0 ; i < size; i++)
 {
     current = (*data)[i];
     if(isalnum(current)) result+=current;
else if(current == '(')
             {
               cur="";
               cur+=current;
               op.push(cur);
               op.pop();
             }
      else if(current == ')')
             {
                temp = op.top();
                result+=temp;
                op.pop();

             }
      else
      {
        cur = "";
        cur+=current;
        op.push(cur);
      }
 }
while(!op.empty())
 {
     result+=op.top();
    op.pop();
 }
 return result;
}


string Converter::InfixToPrefix(string *data , int size)
{
string result = "";
result = InfixToPostfix(data , size);
int size2 = result.size();
return PostfixToPrefix(&result , size2);
}
string Converter::PostfixToInfix(string *data , int size)
{
  stack<string> opp;
  string result;
   string f;
   string s;
  char current ;
  for(int i = 0 ; i < size; i++)
  {
    current = (*data)[i];
    if(isalnum(current))
    {
     string cur;
     cur+= current;
    opp.push(cur);
    continue;
    }
    else
    {
      f = opp.top();
      opp.pop();
      s = opp.top();
      opp.pop();
      string input = "("+s+current+f+")";
      opp.push(input);
    }
  }
  while(!opp.empty())
 {
    result+=opp.top();
    opp.pop();
 }
 return result;
}
string Converter::PrefixToInfix(string *data, int size)
{
  string result = PrefixToPostfix(data,size);
  int size1 = result.size();
  string newresult = PostfixToInfix(&result,size1);
  return newresult;
}
string Converter::PrefixToPostfix(string *data , int size)
{
  stack<string>temp;
  char current;
  string cur ;
  string result;
  string f ;
   string s;
   cur ;
  for(int i = size-1; i >= 0 ; i--)
  {
      current = (*data)[i];
    if(isalnum(current))
    {
        cur = "";
        cur +=current;
        temp.push(cur);
    }
    else
    {
      f = temp.top();
      temp.pop();
      s = temp.top();
      temp.pop();
      string help = "";
      help+=f+s+current;
      temp.push(help);
    }
  }
  while(!temp.empty())
  {
    result+=temp.top();
    temp.pop();
  }
  return result;
}
string Converter::PostfixToPrefix(string *data , int size)
{
 stack<string>temp;
  char current;
  string cur ;
  string result;
  string f ;
  string s;
  for(int i = 0 ; i<size ; i++)
  {
      current = (*data)[i];
      if(isalnum(current))
      {
          cur = "";
          cur+=current;
          temp.push(cur);
      }
      else
      {
       f = temp.top();
       temp.pop();
       s = temp.top();
       temp.pop();
       string help= "";
       help +=current+s+f;
       temp.push(help);
      }
  }
  while(!temp.empty())
  {
    result+=temp.top();
    temp.pop();
  }
  return result;
}
double Converter::makeoperation(double num1 , double num2 , char op)
{
    if(op=='+')
    {
        return num1+num2;
    }
    else if(op=='-')
    {
        return num1 - num2;
    }
    else if(op=='*')
    {
        return num1*num2;
    }
    else if(op=='/')
    {
        return num1/num2;
    }
    else if(op=='^')
    {
        return pow(num1 , num2);
    }
    else return 0;
}
double Converter::calcpref(string *data , int size)
{
  string res = "";
  res = PrefixToPostfix(data , size);
  int size1 = res.size();
  double result;
  result = calcpost(&res , size1);
  return result;
}
double Converter::calcpost(string *data , int size)
{
  stack <double> temp;
  char current;
  double f , s , cur;
  for(int i = 0; i < size ; i++)
  {
      current = (*data)[i];
      if(isalnum(current))
      {
        cur = atof(&current);
        temp.push(cur);
      }
      else
      {
          f = temp.top();
          temp.pop();
          s = temp.top();
          temp.pop();
          double help = makeoperation(s , f , current);
          temp.push(help);
          help = 0.0;
      }
  }
  double rr = temp.top();
  return rr;
}
