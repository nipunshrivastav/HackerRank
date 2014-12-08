// HR_AltChar.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int deletion (string a) {
	int result = 0;
	char cur = a[0];
	cout << a.length();
	for (int i = 1; i<a.length(); i++) {
		if (cur == a[i]) {
			result++;
		}
		else {
			cur = a[i];
		}
	}
	return result;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int cases;
	cin >> cases;
	string temp;
	getline (cin, temp);
	for (int i = 0; i<cases; i++) {
		getline (cin, temp);
		//deletion(temp);
		cout << deletion(temp) << endl;
	}
    return 0;
}