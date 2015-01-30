// HR_PickingCards.cpp : Defines the entry point for the console application.
//



#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <string.h>

using namespace std;

void print(long long width, long long cnt_srt[]) {
    for (long long i = 0; i<width; i++) {
        cout << cnt_srt[i];
    }
    cout << endl;
}

long long fun(vector <long long> inp, long long N,long long n_min,long long n_max) {
    long long width = N;
    long long cnt_srt[width];
    
    memset(cnt_srt, 0, width*sizeof(long long));
    
    for (long long i = 0; i<N; i++) {
        cnt_srt[inp[i]]++;
    }
    //print(width, cnt_srt);
    
    long long cur_choices = 0, result = 1;
    
    for (long long i = 0; i<N; i++) {
        cur_choices+=cnt_srt[i];
        if (cur_choices==0) {
            return 0;
            break;
        }
        //cout << cur_choices << endl;
        result = (result*(cur_choices--))%1000000007;
    }
    return result;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    long long T, N, temp, n_min, n_max;
    
    cin >> T;
    
    while (T--) {
        
        n_min = LLONG_MAX;
        n_max = LLONG_MIN;
        vector <long long> inp;
        
        cin >> N;
        
        for (long long i=0; i<N; i++) {
            cin >> temp;
            if (temp > n_max) {
                n_max = temp;
            }
            if (temp < n_min) {
                n_min = temp;
            }
            inp.push_back(temp);
        }
        
        if (n_max >= N || n_min > 0) {
            cout << 0 << endl;
        }
        else {
            cout << fun(inp, N, n_min, n_max) << endl;
        }
        
    }
    return 0;
}
/*#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long find(vector <long long> a, long long limt, long long siz) {
	// Optimize this by sorting it before hand
	// complexity can be reduced to order n instead of order n square
    long long counte = 0;
    for (long long i=0; i<siz; i++) {
        if (a[i]<=limt) {
            counte++;
        }
    }
    return counte;
}

long long calcu(vector <long long> a, long long siz) {
    long long res = 1, cur = 0;
    for (long long i=0; i< siz; i++) {
        if (a[i] <= i) {
			res = (res*(cur-i))%1000000007;
		}
		else return 0;
    }
    return res;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    /*long long T, N, temp;
    cin >> T;
    while (T--) {
        vector <long long> inp;
        cin >> N;
        for (long long i=0; i<N; i++) {
            cin >> temp;
            inp.push_back(temp);
        }
		sort(inp.begin(), inp.end());
        cout << calcu(inp, N) << endl;
    }
    return 0;
}
*/