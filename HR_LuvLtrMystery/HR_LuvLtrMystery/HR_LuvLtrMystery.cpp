// HR_LuvLtrMystery.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int distance (string a) {
	int result = 0;
	//char cur = a[0];
	int len =  a.length();
	for (int i = 0; i<len/2; i++) {
		result+= abs((int)a[i] - (int)a[len-i-1]);
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
		//distance(temp);
		cout << distance(temp) << endl;
	}
    return 0;
}