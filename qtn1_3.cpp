#include <iostream>
using namespace std;
// URLify change the spaces to %20s as in the urls
string changeSpace(string inp){
    string res="";
    for(int i = 0; i<inp.size();i++){
        if(inp[i]==' '){
            res+="%20";
        } else {
            res+=inp[i];
        }
    }
    return res;
}

int main() {
    cout << "Change space characters to %20!"<<endl;
    cout << "enter a string with spaces: ";
    string inp;
    getline(cin, inp);
    string res = changeSpace(inp);
    cout <<"Original string: " << inp<< endl;
    cout << "Edited String: " << res << endl;
}