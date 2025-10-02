#include <iostream>
#include <string>

using namespace std;

string A;

bool palindromeCheck(string &s){
    int size = s.size();
    for(int i = 0; i < size/2; i++){
        if(s[i]!=s[size-i-1]) return false;
    }
    return true;
}

int main() {
    cin >> A;

    // Please write your code here.
    cout << (palindromeCheck(A) ? "Yes" : "No");
    return 0;
}