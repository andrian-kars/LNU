#ifndef LISTT_H_INCLUDED
#define LISTT_H_INCLUDED
#include <iostream>
using namespace std;
typedef char datatype;

struct Node

{
    datatype key;
    Node *next;
  //  Node *prev;
};

class Listt
{
    Node *front, *end;
public:
    Listt(){front = NULL; end = NULL;}
    ~Listt(){};
    void push(datatype data);
    datatype pop();
    bool stackempty();
    void show();

};



#endif // LISTT_H_INCLUDED
