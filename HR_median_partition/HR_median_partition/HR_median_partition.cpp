// HR_median_partition.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

void print(vector <int>  ar, int size) {
    for (int i=0; i<size; i++){
        cout << ar[i];
        if (i<size-1) {
            cout << " ";
        }
    }
    cout<<endl;
}

int partition(vector <int>  ar, int size, int m) {
    
    
    vector <int> small, big, eq, res;
    for (int i=0; i<size; i++){
        if (m == size)
            return -1;
        if (m == i)
            continue;
        if (ar[i]<ar[m])
            small.push_back(ar[i]);
        if (ar[i]>ar[m])
            big.push_back(ar[i]);
        if (ar[i]==ar[m])
            eq.push_back(ar[i]);
    }
    //small = partition(small, small.size());
    //big = partition(big, big.size());
    if (small.size() == big.size()) {
        return ar[m];
    }
    else if (small.size()+eq.size() == big.size()) {
        return ar[m];
    }
    else if (small.size() == big.size()+eq.size()) {
        return ar[m];
    }
    else return partition(ar, size, m+1);
}
int main(void) {
   vector <int>  _ar;
   int _ar_size;
cin >> _ar_size;
for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
   int _ar_tmp;
   cin >> _ar_tmp;
   _ar.push_back(_ar_tmp); 
}

cout << partition(_ar, _ar_size, 0);
   
   return 0;
}
