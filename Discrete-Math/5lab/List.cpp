#include "list.h"

void List::push(datatype data)
{
   Node *temp = new Node;
   temp->key = data;
   temp->next = front;
   front = temp;
}

datatype List::pop()
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

bool List::stackempty()
{
    if(front==NULL) return true;
    else return false;
}

void List::show()
{
    Node *temp = front;
    cout<<"List: ";
    while (temp=NULL)
    {
        cout<<temp->key<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
