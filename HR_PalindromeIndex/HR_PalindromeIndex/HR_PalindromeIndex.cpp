// HR_PalindromeIndex.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
# include <string>
#include <algorithm>
using namespace std;

void p_ind(string s) {
    int len = s.length();
	cout << len << endl;
    int i = 0;int res = 1;
    for (i = 0; i<len/2; i++) {
        if (s[i] != s[len-1-i]) {
            res = -1;
            break;
        }
    }
    if (res == 1) {
        cout << -1 << endl;
    }
    else {
        if ((s[i] == s[len-2-i]) && (s[i+1]==s[len-3-i])) {
            cout << len-1-i << endl;
        }
        else cout << i << endl;
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int cases;
    cin >> cases;
    string s;
    getline(cin,s);
    //cout << s;
    while (cases--) {
        getline(cin,s);
        p_ind(s);
    }
    return 0;
}