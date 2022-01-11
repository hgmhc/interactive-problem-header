#include <bits/stdc++.h>
#include <problem_solving/interactive.hpp>
using namespace std;
const int T = 10;
vector<int> answer {4,2,1,3};
ifstream in_stream;
ofstream out_stream;

void start() {
    in_stream.open("out.txt");
    out_stream.open("in.txt");
    int n = 4;
    out_stream << n << '\n';
    cout << n << '\n';
}

void read() {
    char c; cin >> c;
    if (c == '?') {
        int x; cin >> x;
        cout << x << "가 궁금하다고?" << endl;
    } else if (c == '!') {
        int x; cin >> x;
        cout << x << "가 인상깊다고?" << endl;
    }
}
