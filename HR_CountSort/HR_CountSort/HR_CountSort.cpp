// HR_CountSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void part1(int counter[]) {
	for (long long i=0; i<100; i++) {
		cout << counter[i] << " ";
	}
	cout << endl;
}

void part2(int a[]) {
	for (long long i = 0; i<100; i++) {
		for (long long j = 0; j<a[i]; j++) {
			cout << i << " ";
		}
	}
	cout << endl;
}


void part3(int counter[]) {
	long long sum = 0;
	for (long long i=0; i<100; i++) {
		sum+= counter[i];
		cout << sum << " ";
	}
	cout << endl;
}


int main() {
    long long n;cin >> n; int temp; vector <int> input;
	int counter[100] = {0};
	for (long long i=0; i<n; i++) {
		cin >> temp;
		input.push_back(temp);
		counter[temp]++;
	}
	
	//part1(counter);

	//part2(counter);

	part3(counter);

    return 0;
}

