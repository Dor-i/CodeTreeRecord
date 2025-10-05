#include <iostream>

using namespace std;

void swap(int* a, int* b){
    int X = *a;
    *a = *b;
    *b = X;
    return;
}

int n, m;

int main() {
    cin >> n >> m;
    swap(n,m);
    cout << n << ' ' << m;
    // Please write your code here.

    return 0;
}