// HR_ServiceLane.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector <int> input;

int find(int entr, int ext) {
    int cur_min = input[entr];
    for (int i = entr+1; i<=ext; i++) {
        if (cur_min > input[i]) {
            cur_min = input[i];
        }
    }
    if (cur_min > 2) {
        return 3;
    }
    else if (cur_min > 1) {
        return 2;
    }
    else {
        return 1;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T, N, temp, starting, ending;
    cin >> N >> T;
    for (int i=0; i<N; i++) {
        cin >> temp;
        input.push_back(temp);
    }
    for (int i=0; i<T; i++) {
        cin >> starting >> ending;
        cout << find(starting, ending) << endl;
    }
    return 0;
}
