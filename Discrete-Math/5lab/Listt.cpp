#include "listt.h"
#include <iostream>
using namespace std;
void Listt::push(datatype data)
{
   Node *temp = new Node;
   temp->key = data;
   temp->next = front;
   front = temp;
}

datatype Listt::pop()
{
    datatype result;
    if (stackempty())
    {
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    else
    {
        Node *temp = front;
        front = temp->next;
        result = temp->key;
        delete temp;
    }
    return result;

}

bool Listt::stackempty()
{
    if(front==NULL) return true;
    else return false;
}

void Listt::show()
{
    Node *temp = front;
    cout<<"List: ";
    while (temp!=NULL)
    {
        cout<<temp->key<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
