// HR_ShrlcknPairs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


long long perm(int a, int b) {
    long long res = 1;
    
    for (int i = a-b+1; i<=a; i++) {
        res*= i;
    }
    return res;
}


int main() {
    int T; long long N, temp;
    
    cin >> T;
    
    for (int i = 0; i<T; i++) {
        cin >> N;
        int cur_count = 1; long long cur;
        vector <long long> input; long long sum = 0;
        for (int j=0; j<N; j++) {
            cin >> temp;
            input.push_back(temp);
        }
        sort(input.begin(), input.end());
        cur = input[0];
        for (int j = 1; j<N; j++) {
            if (cur == input[j]) {
                cur_count++;
            }
            else {
                if (cur_count>1) {
                    sum+= perm(cur_count,2);
                }
                cur = input[j];cur_count = 1;
            }
        }
		if (cur_count>1) {
            sum+= perm(cur_count,2);
        }
        cout << sum << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
