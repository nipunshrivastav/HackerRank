// HR_ShrlckNQueries.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//#include <cmath>
using namespace std;

unsigned long long my_pow(unsigned long long a,unsigned long long b)
{
    unsigned long long res = 1;
    unsigned long long n = 1000000007;
while (b)
{
    if (b % 2) { res = (res * a) % n; }

    a = (a * a) % n;
    b /= 2;
}



    res %=n;
    return res;
}

void print(vector <unsigned long long>  ar, int size) {
    for (int i=0; i<size; i++){
        cout << ar[i];//%1000000007;
        if (i<size-1) {
            cout << " ";
        }
    }
    cout<<endl;
}


int main() {
    vector <unsigned long long> a, b, c; unsigned long long n, m; unsigned long long temp;
    unsigned long long factor = 1;
    cin >> n >> m;
    
    for (unsigned long long i = 0; i < n; i++) {
        cin >> temp;
		a.push_back(temp);
    }
	for (unsigned long long i = 0; i < m; i++) {
        cin >> temp;
		b.push_back(temp);
    }
	for (unsigned long long i = 0; i < m; i++) {
        cin >> temp;
		c.push_back(temp);
    }
	unsigned long long count_fact;
    
    for (unsigned long long i = 0; i < m ; i++) {
         count_fact = n/b[i];
       
        
        cout << count_fact << endl;
        factor=(factor*my_pow(c[i],count_fact))%1000000007;
    }
    cout << factor << endl;
    //print(factor, m);
    
    

for (unsigned long long i = 0; i<n; i++) {
    a[i] = (a[i]*factor)%1000000007;
}
	print(a, n);
    
    return 0;
}
