// HR_GoT1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int check_even(int a[]) {
	int result = 1;
	for (int i=0;i<26;i++) {
		if(a[i]%2 == 1) {
			result = 0;
			break;
		}
	}
	return result;
}

int check_odd(int a[]) {
	int result = 1;int parity = 0;
	for (int i=0;i<26;i++) {
		if((a[i]%2) + parity == 2) {
			result = 0;
			break;
		}
		else if(a[i]%2 == 1) {
			parity = 1;
		}
	}
	return result;
}

int check(string s) {
	long len = s.length();
	int hash_map[26] = {0};
	int result = 1;

	for (long i=0; i<len; i++) {
		hash_map[(int)s[i]-int('a')]++;
	}

	if (len%2 == 0)
		result = check_even(hash_map);
	else
		result = check_odd(hash_map);
	return result;
}

int main() {
   
    string s;
    cin>>s;
     
    int flag = check(s);
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string 
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
