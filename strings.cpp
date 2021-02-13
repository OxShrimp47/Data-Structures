/*
Name:Tommy Lee Truong
Last Edit:Jan 27 2018
Program Name: Strings
*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
vector<string>words;
string input;
cin>>input;
while(input != "quit"){
if(input.length()>1){
words.push_back(input);
}
else{
for(int i = 0; i < words.size; i++){
if(input[0]==words[0]){
cout<<words[i]<<endl;
}
}
}

return 0;
}
