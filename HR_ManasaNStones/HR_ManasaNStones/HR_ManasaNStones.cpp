// HR_ManasaNStones.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void calc(int n, int a, int b) {
	int sum = 0;
	for (int i = 0; i<n; i++) {
		cout << (n-1-i)*a + i*b;
		if (i < n-1)
			cout << " ";
		else cout << endl;
	}
}

int main()
{
	int cases;
	long n, a, b;
	cin >> cases;
	for (int i=0; i<cases; i++) {
		cin >> n;cin >> a;cin >> b;
		if (a>b) {
			calc(n,b,a);
		}
		else calc(n,a,b);
		
	}
	return 0;
}

