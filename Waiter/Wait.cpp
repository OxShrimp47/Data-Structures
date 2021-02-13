/*
Name:Tommy Lee Truong
Last Edit:Apr 29 2018
Program Name: Waiter
*/
#include <iostream>
#include "StringQueue.h"
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    char act;
    Queue Name;
    string name;
    act = 'f';
    while (act!='q') {
        cin>>act;
        if(act == 'a'){
        	cin>>name;
        	cout<< name + " arrived"<<endl;
        	Name.push(name);
    	}
    	if(act == 's'){
        	if(!Name.isEmpty()){
            	name = Name.pop();
            	cout<<"Now serving "+name<<endl;
        	}	
        	else{
            cout<<"No customers waiting"<<endl;
        	}
    	}
    	if(act == 'n'){
        	if(!Name.isEmpty()){
            	name = Name.peek();
            	cout<<"Next in line: "+name<<endl;
        	}
        	else{
            	cout<<"The waiting list is empty"<<endl;
        	}
    	}
	}
    if(!Name.isEmpty()){
        cout<<"Come back tomorrow:"<<endl;
        while(!Name.isEmpty()){
            cout<<Name.pop()<<endl;
        }
    }
    cout<<"Closing up now.";
    return 0;
}

