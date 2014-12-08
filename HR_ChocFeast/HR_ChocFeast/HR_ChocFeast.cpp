// HR_ChocFeast.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int find_chocs(int money, int cost, int wrappers_reqd) {
	int result = 0;
	int temp = 0;
	result+= money/cost;
	int wraps = result;
	while (wraps>=wrappers_reqd) {
		temp = wraps/wrappers_reqd;
		result+= temp;
		wraps = wraps%wrappers_reqd + temp;
	}
	
	return result;
}


int main() {
    /* The code required to enter n,k, candies is provided*/

    int ops;
    cin >> ops;
	
	int money, cost, wrappers;
	for (int i=0; i<ops; i++) {
		cin >> money >> cost >> wrappers;
		cout << find_chocs(money, cost, wrappers) << endl;
	}
	
    return 0;
}