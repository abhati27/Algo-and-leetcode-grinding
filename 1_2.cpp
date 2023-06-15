#include <iostream>
using namespace std;
// checking for if the two strings are a permutation of each other
bool isPerm(string inp1, string inp2){
    int arr[128]={0};
    if(inp1.size() != inp2.size())// if they arent the same size
        return false;
    for(int i=0;i<inp1.size();i++){// add all the letters in string 1 
        arr[inp1[i]]++;
    }
    for(int i=0;i<inp2.size();i++){// subtract all letters in string 2
        arr[inp2[i]]--;
        if(arr[inp2[i]]<0) // if any letter count goes below 0
            return false;
    }
    return true;
}

int main() {
    cout << "Check if one is a permutation of the other!"<< endl;
    string inp1;
    cout << "enter first string: ";
    cin >> inp1;
    string inp2;
    cout << "enter second string: ";
    cin >> inp2;
    int res = isPerm(inp1, inp2);
    cout << ((res==1)? "true":"false");
    
}