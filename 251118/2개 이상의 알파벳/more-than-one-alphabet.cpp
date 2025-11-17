#include <iostream>
#include <string>

using namespace std;

string A;

bool check(string s){
    for(int i = 1; i < s.size(); i++){
        if(s[0] != s[i])
            return true;
    }
    return false;
}

int main() {
    cin >> A;

    // Please write your code here.
    cout << (check(A) ? "Yes" : "No");
    return 0;
}