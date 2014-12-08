// HR_ShrlcknBeast.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long decent_no(long long n) {
	long long result = -1;
	if (n%3 == 0)
		return n;
	else {
		while (((n-5)%3!=0) && ((n-5)>0)) {
			n = n-5;
		}
	}
	n-= 5;
	if (n>=0)
		return n;
	else return -1;
}

void print (long long N, long long no) {
	for(long long i= 0; i<no; i++) {
		cout << '5';
	}
	for(long long i= no; i<N; i++) {
		cout << '3';
	}
	cout << endl;
}

int main() {
	int T; long long N; long long no;
	cin >> T;
	for (int i=0; i<T; i++) {
		cin >> N;
		no = decent_no(N);
		if (no<0)
			cout << -1 << endl;
		else {
			print(N,no);
		}
	}
	return 0;
}

