// HR_ShrlcknPerm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bitset>

using namespace std;

long long dev = 1000000007;

long long find1(long long a) {
	long long temp=1;
	for(long long i = 2; i <= a; i++) {
		temp = (temp*i)%dev;
	}
	return temp;
}


long long fast_exp(long long x, long long y) {
	bitset<64> b(y);
	
	long long max = 0, res = 1, temp = x;
	long long fac2 = 1;
	for (long long i = 0; i<64; i++) {
		if (b[i] == 1) {
			max = i+1;
		}
	}
	for (long long i = 0; i<max; i++) {
		if (i>0) {
			temp = (temp*temp)%dev;
		}
		if (b[i] == 1) {
			res = (res*temp)%dev;
		}
	}
	return res;
}


long long cal(long long zeros, long long ones) {
	long long fac1 = find1(ones+zeros-1);
	long long fac2 = find1(ones-1);
	long long fac3 = find1(zeros);
	long long fac4 = fast_exp(((fac2*fac3)%dev), dev-2);
	return (fac1*fac4)%dev;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	long long t, ones, zeros;
	cin >> t;
	while(t--) {
		cin >> zeros >> ones;
		if (ones == 1) {
			cout << 1 << endl;
			continue;
		}
		if (zeros == 0) {
			cout << 1 << endl;
			continue;
		}
		if (ones == 2 || zeros == 1) {
			cout << ones+zeros-1 << endl;
			continue;
		}
		cout << cal(zeros, ones);
	}
    return 0;
}
