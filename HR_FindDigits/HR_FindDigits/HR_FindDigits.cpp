// HR_FindDigits.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factors(int a) {
	int result = 0;
	int num = a;
	while (a>0) {
		int q = a%10;
		a = a/10;
		if (q == 0) {
			continue;
		}
		if (q == 1) {
			result++;
			continue;
		}
		if (num%q == 0) {
			result++;
			continue;
		}
		
	}
	return result;
}

int main() {
    int cases, temp; vector <int> input;
	cin >> cases;
	for (int i=0; i<cases; i++) {
		cin >> temp;
		input.push_back(temp);
	}
	for (int i=0; i<cases; i++) {
		cout << factors(input[i]) << endl;
	}
	
    return 0;
}