// HR_HalParty.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int cases;
	long K, temp;
	cin >> cases;
	for (int i=0; i<cases; i++) {
		cin >> K;
		if (K%2 == 0) {
			cout << pow(K/2,2);
		}
		else {
			temp = K/2;
			cout << temp*(temp+1);
		}
	}
	return 0;
}

