#include <bits/stdc++.h>
using namespace std;

int lastPosition(int n, int m, int k) {
    // n = size of circle
    // m = num of items
    // k = initial positn
    // n-k+1 is the num of positions 
    if(m <= n-k+1) {
        // return krenge initial position+ number of items
        return m+k-1;
    }
    // agar items zyda hai total positions se then we'll just substract that number of items to give
    m -= (n-k+1);

    // if n & m dono same honge to
    return (m%n==0) ? n : (m%n);
}

int main() {
    int n,m,k;
    cin >>n>>m>>k;
    cout << lastPosition(n,m,k);
    return 0;
}