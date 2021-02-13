/*
Name:Tommy Lee Truong
Last Edit:Apr 29 2018
Program Name: Reader
*/
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;


int main(){
    ifstream ifs("words.txt");
    int words = 0;
    string word;
    string man;
    cin>>man;
    while (ifs >> word){
        if(man==word){
        ++words;
        }
    }
    
    cout<<words<<endl;
    return 0;
}
