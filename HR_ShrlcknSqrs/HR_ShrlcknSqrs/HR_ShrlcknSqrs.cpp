// HR_ShrlcknSqrs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int find_sqrs(int a, int b) {
	int result = 0;

	int x = sqrt(a);
	int y = sqrt(b);

	result = y-x;

	if (a == x*x)
		result++;

	return result;
}

int main() {
    /* The code required to enter n,k, candies is provided*/

    int cases;
    cin >> cases;
	
	int lower, upper;
	for (int i=0; i<cases; i++) {
		cin >> lower >> upper;
		cout << find_sqrs(lower, upper) << endl;
	}
	
    return 0;
}