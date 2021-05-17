#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <iostream>
using namespace std;

typedef int datatype;

struct Node

{
    datatype key;
    Node *next;
  //  Node *prev;
};

class List
{
    Node *front, *end;
public:
    List(){front = NULL; end = NULL;}
    ~List(){};
    void push(datatype data);
    datatype pop();
    bool stackempty();
    void show();

};




#endif // LIST_H_INCLUDED
