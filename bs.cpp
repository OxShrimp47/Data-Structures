/*
Name:Tommy Lee Truong
Last Edit:Apr 29 2018
Program Name: Binary Search
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string input;
    vector<string> name;

    cin >> input;

    while (input != "quit") {

        if (input.length() == 1) {

            for (int i = 0; i < name.size(); i++) {

                if (input[0] == name[i][0]) {
                    cout << name[i] <<endl; 
                }
            }
        }
        else {
            name.push_back(input);
        }
        cin >> input;
    }
    return 0;
}
