// HR_AngryChildren.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;


// It is NOT mandatory to use the provided template. You can handle the IO section differently.
int calculate(int N, int K, vector <long long> candies) {
	//sort the vector
	sort (candies.begin(), candies.end());
	int result = INT_MAX;
	int temp;
	for (int i=0; i<N-K; i++) {
		temp = (candies[i+K-1] - candies[i]);
		if ( temp < result)
			result = temp;
	}
	return result;
}

int main() {
    /* The code required to enter n,k, candies is provided*/

    int N, K, unfairness;
    cin >> N >> K;
    vector <long long> candies;
	long long temp;

    for (int i=0; i<N; i++) {
		cin >> temp;
		candies.push_back(temp);
	}
    
    /** Write the solution code here. Compute the result, store in  the variable unfairness --
    and output it**/
	unfairness = calculate(N,K,candies);
    cout << unfairness << "\n";
    return 0;
}
