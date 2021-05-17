#include "Listt.h"
#include "Converter.h"

using namespace std;

int main()
{
  Converter test;
  int choice;
  string input , result;
  int size;
  double resultd;
  do
    {
        cout<<endl;
        cout<<"Select action"<<endl;
        cout<<"1 - InfixToPostfix"<<endl;
        cout<<"2 - InfixToPrefix"<<endl;
        cout<<"3 - PostfixToInfix"<<endl;
        cout<<"4 - PrefixToInfix"<<endl;
        cout<<"5 - Calculate postfix"<<endl;
        cout<<"6 - Calculate prefix"<<endl;
        cout<<"7 - Exit"<<endl;
        cout<<endl;

        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"Enter a string:"<<endl;
                cin>>input;
                size = input.size();
                result = test.InfixToPostfix(&input , size);
                cout<<"Output: "<<result<<endl;
                break;
            }

            case 2:
            {
                cout<<"Enter a string:"<<endl;
                cin>>input;
                size = input.size();
                result = test.InfixToPrefix(&input , size);
                cout<<"Output: "<<result<<endl;
                break;
            }
            case 3:
            {
                cout<<"Enter a string:"<<endl;
                cin>>input;
                size = input.size();
                result = test.PostfixToInfix(&input , size);
                cout<<"Output: "<<result<<endl;
                break;
            }
            case 4:
            {
                cout<<"Enter a string:"<<endl;
                cin>>input;
                size = input.size();
                result = test.PrefixToInfix(&input , size);
                cout<<"Output: "<<result<<endl;
                break;
            }
            case 5:
            {
                cout<<"Enter a string:"<<endl;
                cin>>input;
                size = input.size();
                resultd = test.calcpost(&input , size);
                cout<<"Output: "<<resultd<<endl;
                break;
            }
            case 6:
            {
                cout<<"Enter a string:"<<endl;
                cin>>input;
                size = input.size();
                resultd = test.calcpref(&input , size);
                cout<<"Output: "<<resultd<<endl;
                break;
            }
        }
    }
    while(choice!=7);
    cout<<"///j777 Ending a program ///"<<endl;
    return 0;
}

