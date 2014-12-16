// HR_flowers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/* Sample program illustrating input/output */

#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

struct node
{
long long num1;
long num2;
    
    friend bool operator < (const node& a, const node& b) {
        if (a.num2 == b.num2) {
            return a.num1 < b.num1;
        }
        return a.num2 < b.num2;
}

    friend long long operator + (long long a, const node& b) {
        return ((long long)(a)+(long long)(b.num1));
}
};

void print(vector <node> a) {
    for (int i = 0; i<a.size(); i++) {
        cout << a[i].num1 << "," << a[i].num2 << " ";
    }
    cout << endl;
}

long long flwrs(long long N, long long K, vector <long long> C) {
    vector <node> frnds; node temp;
    temp.num1 = 0;
    temp.num2 = 0;
    
    for (long long i = 0; i<K; i++) {
        frnds.push_back(temp);
    }
    
    for (long long i = N-1; i>=0; i--) {
        frnds[0].num1+=(++frnds[0].num2)*C[i];
        sort(frnds.begin(), frnds.end());
        //print(frnds);
    }
    
    return (accumulate(frnds.begin(), frnds.end(), 0));
	// Worked right on Hacker Rank
}


int main(void){
//Helpers for input and output
   long long N, K, temp;
  cin >> N >> K;
   vector <long long> C;

    for(long long i = 0; i < N; i++){
      cin >> temp;
       C.push_back(temp);
   }
    
    sort(C.begin(), C.end());
 
   long long result = flwrs(N, K, C);
   cout << result << "\n";
   return 0;
}

