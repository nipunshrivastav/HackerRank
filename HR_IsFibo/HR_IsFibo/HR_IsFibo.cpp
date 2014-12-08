// HR_IsFibo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector <long> series;


void create(long max) {
	int i = 1;
	series.push_back(0);series.push_back(1);
	while (series[i]<max) {
		series.push_back(series[i-1]+series[i]);
		i++;
	}
}

int isFibo(long num) {
	int result = 0;
	for (int i = 0; i < series.size(); i++) {
		
		if (series[i] > num) {
			break;
		}

		if (series[i] == num) {
			result = 1;
			break;
		}

	}
	return result;
}


int main() {
    int cases;
	long temp;
	long max=0;
	vector <long> input;
	cin >> cases;

	for (int i=0; i<cases; i++) {
		cin >> temp;
		if (max < temp) {
			max = temp;
		}
		input.push_back(temp);
	}

	create(max);

	char output[2][15] = {"IsNotFibo", "IsFibo"};
	for (int i=0; i<cases; i++) {
		cout << output[isFibo(input[i])] << endl;
	}
	
    return 0;
}