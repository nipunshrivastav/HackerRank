#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct node
{
int num1;
char num2;
   
    friend bool operator < (const node& a, const node& b) {
        return (int)a.num2 < (int)b.num2;
    }
};

void print(vector <node> a, int len) {
    for (int i = 0; i< len; i++) {
        cout << a[i].num1 << a[i].num2 << " ";
    }
    cout << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t, rows, cols;
    string s;
    cin >> t;
    getline(cin,s);
    while(t--) {
       
        getline(cin,s);
       
        char map[26];
        int done[26] = {0};
       
        vector <node> frnds;
        node temp_node;
        string s_temp = s;
        cols = 0;
     
        for (int i = 0; i<s_temp.length(); i++) {
            if (done[(int)s_temp[i] - (int)'A'] == 1) {
                // Checked if already seen the letter in the keyword
               // s.erase(s.begin()+i);
                // if seen then deleted from keyword
                continue;
            }
            // if not seen then continued
            done[(int)s_temp[i] - (int)'A'] = 1;
            temp_node.num1 = cols++;
            temp_node.num2 = s_temp[i];
            frnds.push_back(temp_node);
        }
        /*for (int i = 0; i<26; i++) {
            if(done[i]==1) {
                cout << (char)(i+(int)'A');
            }
        }
        cout << endl;*/
        
        rows = 26/cols;
        if(26%cols!=0) {
            rows++;
        }
       
        char temp[rows][cols];
       vector <node> frnds2 = frnds;
        sort(frnds.begin(), frnds.end());
        //cout << s_temp<<endl;
        //print(frnds,cols);
        
        for (int i = 0; i<cols; i++) {
            temp[0][i%cols] = frnds2[i].num2;
        }
        int counter = 0;
        for (int i = cols; i<26; i++) {
            while (done[counter] == 1) {
                //cout << (char)(counter + (int)'A');
                counter++;
            }
            temp[i/cols][i%cols] = (char)(counter + (int)'A');
            counter++;
        }
        /*for (int i = 0; i<26; i++) {
            cout << temp[i/cols][i%cols];
            if(i%cols == cols-1) {
                cout << endl;
            }
        }
        cout << endl;*/
        counter = 0;
        
        for (int i = 0; i<cols; i++) {
            for (int j = 0; j<rows; j++) {
                if (j*cols+frnds[i].num1>=26) {
                    continue;
                }
                else {map[(int)(temp[j][frnds[i].num1])-(int)'A'] = (char)(counter++ + (int)'A');}
            }
        }
        /*for (int i = 0; i<26; i++) {
            cout<<map[i]<<" ";
        }*/
        getline(cin,s);
        //cout << endl << s << endl;
        for (int i =0; i<s.length(); i++) {
            if (s[i] == ' ') {
                cout << s[i];
            }
            else {
                cout << map[(int)s[i]-(int)'A'];
            }
        }
        cout << endl;
    }
    return 0;
}