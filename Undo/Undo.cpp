/*
Name:Tommy Lee Truong
Last Edit:Apr 29 2018
Program Name: Strings
*/
#include <iostream>
#include "OpStack.h"
using namespace std;

int main(int argc, const char * argv[]) {
    Stack* myStack = new Stack();
    long total = 0;
    char action;
    char prevact='n';
    long prev;
    while(action!='q'){
        cin>>action;
        if(action=='a'){
            long add;
            cin>>add;
            total = total + add;
            myStack->push(add, 'a');
        }
        if(action=='s'){
            long sub;
            cin>>sub;
            total= total -sub;
            myStack->push(sub, 's');
        }
        if(action=='z'){
            Link* temp = myStack->pop();
            prevact= temp->op;
            prev=temp->data;
            if(prevact=='a'){
                total=total-prev;
            }
            if(prevact=='s'){
                total=total+prev;
            }
            if(myStack==NULL){
                cout << "Nothing to undo..." <<endl;
            }
        }
        if(action!='q'){
        cout<<"Total: "<<total<<endl;
        }
    }
    return 0;
}
