// HR_FillJars.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* The code required to enter n,k, candies is provided*/

    int jars, ops;
    cin >> jars >> ops;
	long long sum = 0;
	int candies, a, b;
	for (int i=0; i<ops; i++) {
		cin >> a >> b >> candies;
		sum+= (b-a+1)*candies;
	}
	cout << sum/jars;
    return 0;
}