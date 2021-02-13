/*
Name:Tommy Lee Truong
Last Edit:Apr 29 2018
Program Name: Remainder
*/
#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    if (N>=2){
        cout<<2<<endl;
    for(int i=3; i<N; i++){
        if(i%2>0){
            if (i<9){
            cout<<i<<endl;
            }
            else{
                if(i%3>0){
                    cout<<i<<endl;
                }
            }
        }
    }
    }
    return 0;
}
