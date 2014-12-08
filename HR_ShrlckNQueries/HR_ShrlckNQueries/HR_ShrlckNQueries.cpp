// HR_ShrlckNQueries.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void print(vector <long long>  ar, int size) {
    for (int i=0; i<size; i++){
        cout << ar[i]%1000000007;
        if (i<size-1) {
            cout << " ";
        }
    }
    cout<<endl;
}


int main() {
    vector <long long> a, b, c; int n, m; long long temp;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        cin >> temp;
		a.push_back(temp);
    }
	for (int i = 0; i < m; i++) {
        cin >> temp;
		b.push_back(temp);
    }
	for (int i = 0; i < m; i++) {
        cin >> temp;
		c.push_back(temp);
    }

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if ((j+1) % b[i] == 0) {
				a[j] = a[j] * c[i];
			}
		}
	}

	print(a, n);
    
    return 0;
}
