// HR_ACMICPC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string or_string(string a, string b) {
	int len = a.length();
	string s = a;
	for (int i = 0; i < len; i++) {
		if ((a[i] == '1') || (b[i] == '1')) {
			s[i] = '1';
		}
		else s[i] = a[i];
	}
	return s;
}

int check_len(string s) {
	int res = 0;
	for (int i=0; i<s.length(); i++) {
		if (s[i] == '1')
			res++;
	}
	return res;
}

string find_max(vector <string> t_array) {
	int max = -1; string res = t_array[0];
	string temp; int temp_len;
	int len = t_array[0].length();
	for (int i = 0; i<t_array.size()-1; i++) {
		
		for (int j = i+1; j<t_array.size(); j++) {
			
			temp = or_string(t_array[i],t_array[j]);
			temp_len = check_len(temp);
			if (max < temp_len) {
				res = temp;
				max = temp_len;
			}
			
			if (max == len) {
				break;
			}
		}
	}
	return res;
}

long long count(vector <string> t_array, int max) {
	long long counter = 0; string temp;
	for (int i = 0; i<t_array.size(); i++) {
		for (int j = i+1; j<t_array.size(); j++) {
			temp = or_string(t_array[i],t_array[j]);
			if (check_len(temp) == max) {
				counter++;
			}
		}
	}
	return counter;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int students, topics;
	cin >> students >> topics;
	vector <string> t_array;
	string temp;
	getline (cin, temp);
	for (int i = 0; i<students; i++) {
		getline (cin, temp);
		t_array.push_back(temp);
	}

	string max = find_max(t_array);

	long long counter = check_len(max);
	cout << counter << endl;

	cout << count(t_array, counter) << endl;

    return 0;
}
