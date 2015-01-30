// HR_BuildList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// HR_BuildList.cpp : Defines the entry point for the console application.
//


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <bitset>

using namespace std;

string crte(long long j, string s, long long len) {
    string temp;
    bitset<64> b(j);
    for (long long i = 0; i<len; i++) {
        if(b[i]) {
            
            temp = temp+s.substr(i,1);
        }
    }
    //cout << temp << endl;
    return temp;
}


void build(string s, long long len) {
    string temp;
    vector <string> powset;
    for (long long i=1; i<=pow(2,len); i++) {
        temp = crte(i, s, len);
        powset.push_back(temp);
    }
    sort(powset.begin(), powset.end());
    for (long long i=1; i<pow(2,len); i++) {
        cout<<powset[i]<<endl;
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	long long t, len;
	string s;
	cin >> t;
	getline(cin, s);
	while(t--) {
        
		cin >> len;
		getline(cin, s);
		getline(cin, s);
		build(s, len);
		//cout << s << endl;
	}
    return 0;
}

/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void build(string s, int len) {
	for (int i=0;i<len; i++) {
		for (int j=1;j<=len-i; j++) {
			cout << s.substr (i,j) << endl;
		}
	}
}

int build2(string s, int len) {
	if (len == 1) {
		cout << s << endl;
		return 0;
	}
	for (int j=1;j<=len; j++) {
		cout << s.substr (0,j) << endl;
	}
	if (len > 2) {
		for (int j=1;j<len; j++) {
			string s2 = s;
			s2.erase(s2.begin()+j);
			build2(s2, len-1);
		}
	}
	if (len>1 ) {
		s.erase(s.begin());
		build2(s, len-1);
	}
	return 1;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT 
	int t, len;
	string s;
	cin >> t;
	getline(cin, s);
	while(t--) {
		cin >> len;
		getline(cin, s);
		getline(cin, s);
		build2(s, len);
		//cout << s << endl;
	}
    return 0;
}*/
