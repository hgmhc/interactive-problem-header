#include <bits/stdc++.h>
#include <problem_solving/interactive.hpp>
#define REP(i,a,b) for (auto i = (a); i <= (b); ++i)
using namespace std;

const int N = 10003;
ifstream in_stream;
ofstream out_stream;

int main() {
    in_stream.open("in.txt");
    out_stream.open("out.txt");
    
    start();
    int n;
    in_stream >> n;
    REP(i,1,n) {
        REP(j,1,n) {
            out_stream << "? " << j << '\n';
            cout << "? " << j << endl;
            read();
        }
    }
}
