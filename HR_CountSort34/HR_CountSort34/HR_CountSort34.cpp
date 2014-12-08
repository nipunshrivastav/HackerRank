// HR_CountSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



void part3(int counter[]) {
	long long sum = 0;
	for (long long i=0; i<100; i++) {
		sum+= counter[i];
		cout << sum << " ";
	}
	cout << endl;
}


int main() {
    long long n;cin >> n; int temp; vector <int> input;string s;vector <string> i_s;
	int counter[100] = {0};
	for (long long i=0; i<n; i++) {
		cin >> temp;
		getline(cin,s);

		input.push_back(temp);
		i_s.push_back(s);
		counter[temp]++;
	}

	for (int i = 0; i<4; i++) {
		cout << i_s[i] << endl;
	}
	
	
	//part3(counter);

    return 0;
}

