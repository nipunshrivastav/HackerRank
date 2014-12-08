// HR_MakeItAnagram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	
	string a, b; int char_value;
	getline(cin, a);
	getline(cin, b);
	int len_a = a.length();
	int len_b = b.length();
	int counter_a[26] = {0};
	//int counter_b[26] = {0};
	for (int i = 0; i<len_a; i++) {
		char_value = (int)a[i] - (int)'a';
		counter_a[char_value]++;
	}
	for (int i = 0; i<len_b; i++) {
		char_value = (int)b[i] - (int)'a';
		counter_a[char_value]--;
	}
	long long sum = 0;
	for (int i = 0; i<26; i++) {
		sum+= abs(counter_a[i]);
	}
	cout << sum << endl;
    return 0;
}