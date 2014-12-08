// HR_SansanXor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// HR_ShrlckNQueries.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
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
     int T, N; long long temp;
	 	ifstream outf2("input");
    // If we couldn't open the output file stream for writing
    if (!outf2)
    {
        // Print an error and exit
        cerr << "Uh oh, Sample.dat could not be opened for writing!" << endl;
        exit(1);
    }
    outf2 >> T;
    cout << T << " T " << endl;
    for (int i = 0; i < T; i++) {
		vector <long long> a;
        outf2 >> N;
		cout << N << " N " << endl;
		for (int j = 0; j < N; j++) {
			outf2 >> temp;
			//cout << temp << " temp " << endl;
			a.push_back(temp);
		}
		long long cur_xor = 0;
		for (int cur_size = 1; cur_size <= N; cur_size++) {
			for (int start_index = 0; start_index < N; start_index++) {
				int end_index = start_index+cur_size-1;
				if (end_index<N) {
					for (int k = start_index; k <=end_index; k++) {
						cur_xor = cur_xor ^ a[k];
					}
					//cout << start_index << " to " << end_index << endl;
				}
			}
		}
		cout << endl << cur_xor << endl << endl;
    }
	
    
    return 0;
}
