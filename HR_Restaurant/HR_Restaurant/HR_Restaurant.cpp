// HR_Restaurant.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int calc(int l, int b) {
	int area = l*b;
	int a = floor(sqrt(area));
	int i;
	for (i=1;i>0;i++) {
		if ((area%(a*a) == 0) && (l%a == 0) && (b%a == 0)) {
			break;
		}
		a--;
	}
	return area/(a*a);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int cases, l, b;
    cin >> cases;
    
    
    while (cases--) {
		cin >> l >> b;
		cout << calc(l, b) << endl;
    }
    return 0;
}