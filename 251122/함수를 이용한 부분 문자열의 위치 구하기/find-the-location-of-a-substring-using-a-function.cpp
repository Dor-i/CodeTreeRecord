#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

int go(string t, string p){
    for(int i = 0; i < t.size(); i++){
        if(t[i]==p[0]){
            int j = 0;
            while(t[i+j]==p[j]){
                j++;
                if(j == p.size())
                    return i;
            }
        }
    }
    return -1;
}

int main() {
    cin >> text;
    cin >> pattern;

    // Please write your code here.
    cout << go(text, pattern);
    return 0;
}