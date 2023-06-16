#include <iostream>
using namespace std;


// check palindromic permutation
//dont cares are the spaces 

bool isPalPerm(string inp){
    int arr[128]={0};
    for(int i=0; i<inp.size(); i++){
        if(inp[i]!=' ')
            arr[inp[i]]++;
    }
    int oddNum =0;
    for(int i =0; i<128; i++){ //count all the odd numbers coz they aint palindromic MAN
        oddNum+= arr[i] %2;
    }
    return oddNum<=1; // this keeps check for odd and even stuff ight
}

int main() {
    cout << "This a palindrome permutation checker!"<< endl;
    cout << "enter the string: ";
    string inp;
    getline(cin, inp);
    bool res = isPalPerm(inp);
    cout<< ((res==1)?"true":"false");
}