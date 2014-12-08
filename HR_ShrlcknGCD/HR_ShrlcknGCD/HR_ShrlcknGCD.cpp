// HR_ShrlcknGCD.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long find_gcd ( long long a, long long b ) {
  if ( a==0 ) return b;
  return find_gcd ( b%a, a );
}

int main()
{
	int N, T;
	long long temp1;
	long long gcd;
	cin >> T;
	for (int i=0; i<T; i++) {
		cin >> N;
		gcd = 0;
		for (int j=0; j<N; j++) {
			cin >> temp1;
			gcd = find_gcd(gcd, temp1);
		}
		if (gcd == 1) {
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}




	return 0;
}

