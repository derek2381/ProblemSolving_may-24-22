// problem link
// https://codeforces.com/problemset/problem/1729/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;

        cin >> a >> b >> c;
        long long int val = abs(b - c) + abs(c - 1);
        a--;
        if(a == val){
            cout << 3 << endl;
        }else if(a < val){
            cout << 1 << endl;
        }else{
            cout << 2 << endl;
        }
    }
}
